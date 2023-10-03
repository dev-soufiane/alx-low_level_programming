#ifndef MAIN_H
#define MAIN_H

/* Standard libraries */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <elf.h>

/* Function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_arguments(int argc);
void check_readability(ssize_t check, char *file_from, int fd_from, int fd_to);
void check_writability(ssize_t check, char *file_to, int fd_from, int fd_to);
void check_closing(int check, int fd);
void validate_elf(unsigned char *ident);
void print_elf_magic(unsigned char *ident);
void print_elf_class(unsigned char *ident);
void print_elf_data(unsigned char *ident);
void print_elf_version(unsigned char *ident);
void print_elf_osabi(unsigned char *ident);
void print_elf_abi_version(unsigned char *ident);
void print_elf_type(unsigned int type, unsigned char *ident);
void print_elf_entry(unsigned long int entry, unsigned char *ident);
void close_file(int fd);
void print_elf_information(Elf64_Ehdr *header);
void read_elf_header(int fd, Elf64_Ehdr *header);

#endif
