#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>


ssize_t read_textfile(const char *filename, size_t letters);
#endif /* _MAIN_H_ */
