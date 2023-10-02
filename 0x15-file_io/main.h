#ifndef MAIN_H
#define MAIN_H

/* Standard libraries */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/* Function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(int file_des);
int copy_file(int source_fd, int dest_fd);
int open_source_and_destination(char *argv[], int *source_fd, int *dest_fd);

#endif
