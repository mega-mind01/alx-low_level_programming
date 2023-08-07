#ifndef MAIN_H
#define MIN_H

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
