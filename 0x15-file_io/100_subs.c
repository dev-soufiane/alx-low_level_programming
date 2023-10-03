#include "main.h"

/**
 * validate_elf - Validate if the file is an ELF.
 * @ident: ELF identification array.
 *
 * Return: None.
 */

void validate_elf(unsigned char *ident)
{
	int i;

	for (i = 0; i < EI_NIDENT; i++)
	{
		if (ident[i] != 127 && ident[i] != 'E' && ident[i] != 'L' && ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_elf_magic - Print ELF magic numbers.
 * @ident: ELF identification array.
 *
 * Return: None.
 */

void print_elf_magic(unsigned char *ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_elf_class - Print ELF class.
 * @ident: ELF identification array.
 *
 * Return: None.
 */

void print_elf_class(unsigned char *ident)
{
	printf("  Class:                             ");
	switch (ident[EI_CLASS])
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
			printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * print_elf_data - Print ELF data format.
 * @ident: ELF identification array.
 *
 * Return: None.
 */

void print_elf_data(unsigned char *ident)
{
	printf("  Data:                              ");
	switch (ident[EI_DATA])
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
			printf("<unknown: %x>\n", ident[EI_DATA]);
	}
}

/**
 * print_elf_version - Print ELF version.
 * @ident: ELF identification array.
 *
 * Return: None.
 */

void print_elf_version(unsigned char *ident)
{
	printf("  Version:                           %d",
			ident[EI_VERSION]);
	switch (ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
