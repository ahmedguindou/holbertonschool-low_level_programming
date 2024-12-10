#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#ifndef LISTS_H
#define LISTS_H
ssize_t read_textfile(const char *filename, size_t letters);
#endif