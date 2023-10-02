#include <stddef.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#ifndef MAIN_H
#define MAIN_H

ssize_t read_textfile(const char *filename, size_t letters);

#endif
