#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include <elf.h>
/**
 * struct file - is the custom file for size
 * Always Return as specified
 * @size: is the parameter given
 * @ssize: is the general size
 */
typedef struct file
{
	size_t size;
	ssize_t ssize;
} file_t;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char **argv);

#endif
