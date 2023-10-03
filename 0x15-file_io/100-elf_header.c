#include "main.h"

/**
 * print_elf_abi_version - Print ELF ABI version.
 * @ident: ELF identification array.
 *
 * Return: None.
 */

void print_elf_abi_version(unsigned char *ident)
{
	printf("  ABI Version:                       %d\n",
			ident[EI_ABIVERSION]);
}

/**
 * print_elf_type - Print ELF file type.
 * @type: ELF file type.
 * @ident: ELF identification array.
 *
 * Return: None.
 */

void print_elf_type(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("  Type:                              ");
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
			printf("<unknown: %x>\n", type);
	}
}

/**
 * print_elf_entry - Print ELF entry point address.
 * @entry: ELF entry point address.
 * @ident: ELF identification array.
 *
 * Return: None
 */

void print_elf_entry(unsigned long int entry, unsigned char *ident)
{
	printf("  Entry point address:               ");
	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

/**
 * close_file - Close a file.
 * @fd: File descriptor of the file to close.
 *
 * Return: None.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}
}

/**
 * main - Display ELF header information from a given ELF file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 98 on error.
 */

int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	validate_elf(header.e_ident);
	read_elf_header(fd, &header);
	print_elf_information(&header);
	close_file(fd);
	return (0);
}
