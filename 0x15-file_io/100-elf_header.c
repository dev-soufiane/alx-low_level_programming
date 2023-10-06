#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header - Prints the ELF header information.
 * @header: Pointer to the ELF header structure.
 *
 * Return: Void.
 */

void print_elf_header(Elf64_Ehdr *header)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass: %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "Unknown");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V" : "Unknown");
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	uint16_t type = header->e_type;

	printf("Type: ");
	switch (type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %04x>\n", type);
			break;
	}
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - The main function for displaying ELF header information.
 * @argc: Number of command-line arguments.
 * @argv: Array of pointers to command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}
	Elf64_Ehdr elf_header;

	ssize_t n = read(fd, &elf_header, sizeof(elf_header));

	if (n == -1)
	{
		perror("Error reading file");
		close(fd);
		return (98);
	}
	if (n != sizeof(elf_header) || memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}
	print_elf_header(&elf_header);
	close(fd);
	return (0);
}
