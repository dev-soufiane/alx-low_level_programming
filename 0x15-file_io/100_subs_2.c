#include "main.h"

/**
 * print_elf_osabi - Print ELF OS/ABI.
 * @ident: ELF identification array.
 *
 * Return: None.
 */

void print_elf_osabi(unsigned char *ident)
{
	printf("  OS/ABI:                            ");
	switch (ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * read_elf_header - Read ELF header from a file.
 * @fd: File descriptor of the ELF file.
 * @header: Pointer to store the ELF header.
 *
 * Return: None.
 */

void read_elf_header(int fd, Elf64_Ehdr *header)
{
	int read_status = read(fd, header, sizeof(Elf64_Ehdr));

	if (read_status == -1)
	{
		close_file(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file\n");
		exit(98);
	}
}

/**
 * print_elf_information - Print ELF header information.
 * @header: Pointer to the ELF header structure.
 *
 * Return: None.
 */

void print_elf_information(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	print_elf_magic(header->e_ident);
	print_elf_class(header->e_ident);
	print_elf_data(header->e_ident);
	print_elf_version(header->e_ident);
	print_elf_osabi(header->e_ident);
	print_elf_abi_version(header->e_ident);
	print_elf_type(header->e_type, header->e_ident);
	print_elf_entry(header->e_entry, header->e_ident);
}
