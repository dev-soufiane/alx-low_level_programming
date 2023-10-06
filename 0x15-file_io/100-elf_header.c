#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

/**
 * ELFcheck - Check if file is ELF.
 * @e_ident: ELF magic numbers.
 *
 * Return: Void.
 */
void ELFcheck(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * printMAGIC - Print ELF magic numbers.
 * @e_ident: ELF magic numbers.
 *
 * Return: Void.
 */
void printMAGIC(unsigned char *e_ident)
{
	int x;

	printf("  Magic:   ");

	for (x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x", e_ident[x]);

		if (x == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * printCLASS - Print ELF class.
 * @e_ident: ELF class.
 *
 *Return: Void.
 */
void printCLASS(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * printDATA - Print ELF data format.
 * @e_ident: ELF data format.
 *
 *Return: Void.
 */
void printDATA(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
}

/**
 * printVERSION - Print ELF version.
 * @e_ident: ELF version.
 *
 * Return: Void.
 */
void printVERSION(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * printOSABI - Print ELF OS/ABI.
 * @e_ident: ELF OS/ABI.
 *
 * Return: Void.
 */
void printOSABI(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * printABI - Print ELF ABI version.
 * @e_ident: ELF ABI version.
 *
 * Return: Void.
 */
void printABI(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * printTYPE - Print ELF type.
 * @e_type: ELF type.
 * @e_ident: ELF class.
 *
 * Return: Void.
 */
void printTYPE(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	if (e_type == ET_NONE)
		printf("NONE (None)\n");

	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");

	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");

	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)\n");

	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");

	else
		printf("<unknown: %x>\n", e_type);
}

/**
 * printENTRY - Print ELF entry point.
 * @e_entry: ELF entry point.
 * @e_ident: ELF class.
 *
 * Return: Void.
 */
void printENTRY(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}


/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: (0) on success.
 *
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, r;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98); }
	r = read(fd, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	ELFcheck(header->e_ident);
	printf("ELF Header:\n");
	printMAGIC(header->e_ident);
	printCLASS(header->e_ident);
	printDATA(header->e_ident);
	printVERSION(header->e_ident);
	printOSABI(header->e_ident);
	printABI(header->e_ident);
	printTYPE(header->e_type, header->e_ident);
	printENTRY(header->e_entry, header->e_ident);

	free(header);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98); }
	return (0);
}
