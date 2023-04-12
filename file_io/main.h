#ifndef __MAIN_H__
#define __MAIN_H__

#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int open_from(const char *pathname, int flags, char *filename);
int open_to(const char *pathname, int flags, int mode, char *filename);
ssize_t xread(int fd, void *buf, size_t count, char *filename);
int xclose(int fd);
int _putchar(char c);
size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* __MAIN_H__ */
