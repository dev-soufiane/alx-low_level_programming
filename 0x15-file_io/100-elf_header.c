#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void checkElfFile(unsigned char *magic);
void printMagicNumbers(unsigned char *magic);
void printElfClass(unsigned char *magic);
void printElfData(unsigned char *magic);
void printElfVersion(unsigned char *magic);
void printElfABI(unsigned char *magic);
void printElfOSABI(unsigned char *magic);
void printElfType(unsigned int type, unsigned char *magic);
void printEntryAddress(unsigned long int entry, unsigned char *magic);
void closeElfFile(int fileDescriptor);

/**
 * checkElfFile - Checks if a file is an ELF file.
 * @magic: A pointer to an array containing ELF magic numbers.
 *
 * Return: Void.
 */
void checkElfFile(unsigned char *magic)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (magic[i] != 127 && magic[i] != 'E' && magic[i] != 'L' && magic[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * printMagicNumbers - Prints the ELF magic numbers.
 * @magic: A pointer to an array containing ELF magic numbers.
 *
 * Return: Void.
 */
void printMagicNumbers(unsigned char *magic)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", magic[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * printElfClass - Prints the ELF class.
 * @magic: A pointer to an array containing the ELF class.
 *
 * Return: Void.
 */
void printElfClass(unsigned char *magic)
{
	printf("Class: ");
	switch (magic[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", magic[EI_CLASS]);
	}
}

/**
 * printElfData - Prints the ELF data type.
 * @magic: A pointer to an array containing the ELF data type.
 *
 * Return: Void.
 */
void printElfData(unsigned char *magic)
{
	printf("Data: ");
	switch (magic[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", magic[EI_DATA]);
	}
}

/**
 * printElfVersion - Prints the ELF version.
 * @magic: A pointer to an array containing the ELF version.
 *
 * Return: Void.
 */
void printElfVersion(unsigned char *magic)
{
	printf("Version: %d", magic[EI_VERSION]);
	printf(magic[EI_VERSION] == EV_CURRENT ? " (current)\n" : "\n");
}

/**
 * printElfABI - Prints the ELF OS/ABI.
 * @magic: A pointer to an array containing the ELF OS/ABI.
 *
 * Return: Void.
 */
void printElfABI(unsigned char *magic)
{
	printf("OS/ABI: ");
	switch (magic[EI_OSABI])
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
			printf("<unknown: %x>\n", magic[EI_OSABI]);
	}
}

/**
 * printElfOSABI - Prints the ELF ABI version.
 * @magic: A pointer to an array containing the ELF ABI version.
 *
 * Return: Void.
 */
void printElfOSABI(unsigned char *magic)
{
	printf("ABI Version: %d\n", magic[EI_ABIVERSION]);
}

/**
 * printElfType - Prints the ELF type.
 * @type: The ELF type.
 * @magic: A pointer to an array containing the ELF type.
 *
 * Return: Void.
 */
void printElfType(unsigned int type, unsigned char *magic)
{
	if (magic[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
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
			printf("<unknown: %x>\n", type);
	}
}

/**
 * printEntryAddress - Prints the ELF entry point address.
 * @entry: The address of the ELF entry point.
 * @magic: A pointer to an array containing the ELF entry point address.
 *
 * Return: Void.
 */
void printEntryAddress(unsigned long int entry, unsigned char *magic)
{
	printf("Entry point address: ");
	if (magic[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) | ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (magic[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

/**
 * closeElfFile - Closes an ELF file.
 * @fileDescriptor: The file descriptor of the ELF file.
 * Description: If the file cannot be closed - exit code 98.
 *
 * Return: Void.
 */
void closeElfFile(int fileDescriptor)
{
	if (close(fileDescriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fileDescriptor);
		exit(98);
	}
}

/**
 * main - Displays information from the ELF header of an ELF file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on error.
 * Description: If the file is not an ELF file or if there is an error, it exits with code 98.
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fileDescriptor, bytesRead;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fileDescriptor = open(argv[1], O_RDONLY);

	if (fileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		return (98);
	}
	header = malloc(sizeof(Elf64_Ehdr));

	if (header == NULL)
	{
		closeElfFile(fileDescriptor);
		dprintf(STDERR_FILENO, "Error: Can't allocate memory for ELF header\n");
		return (98);
	}
	bytesRead = read(fileDescriptor, header, sizeof(Elf64_Ehdr));

	if (bytesRead == -1 || bytesRead != sizeof(Elf64_Ehdr))
	{
		free(header);
		closeElfFile(fileDescriptor);
		dprintf(STDERR_FILENO, "Error: Unable to read ELF header from %s\n", argv[1]);
		return (98);
	}
	checkElfFile(header->e_ident);
	printf("ELF Header:\n");
	printMagicNumbers(header->e_ident);
	printElfClass(header->e_ident);
	printElfData(header->e_ident);
	printElfVersion(header->e_ident);
	printElfABI(header->e_ident);
	printElfOSABI(header->e_ident);
	printElfType(header->e_type, header->e_ident);
	printEntryAddress(header->e_entry, header->e_ident);
	free(header);
	closeElfFile(fileDescriptor);
	return (0);
}
