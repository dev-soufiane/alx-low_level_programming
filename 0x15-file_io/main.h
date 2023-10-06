#ifndef MAIN_H
#define MAIN_H

/* Standard libraries */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

/* Function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_arguments(int argc);
void check_readability(ssize_t check, char *file_from, int fd_from, int fd_to);
void check_writability(ssize_t check, char *file_to, int fd_from, int fd_to);
void check_closing(int check, int fd);

#endif
