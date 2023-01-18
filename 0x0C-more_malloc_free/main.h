0x0C-more_malloc_free

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int);
char *_memcpy(char *dest, char *src, unsigned int n);
int _isdigit(char *n);
int _strlen(char *s);
#endif /* MAIN_H */
