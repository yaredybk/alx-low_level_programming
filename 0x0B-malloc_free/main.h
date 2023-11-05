#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>


#ifndef MAIN_H
#define MAIN_H

int len(char *str);
char *argstostr(int ac, char **av);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int store(int ac, char **av, char *p);
void print_tab(char **tab);



#endif

