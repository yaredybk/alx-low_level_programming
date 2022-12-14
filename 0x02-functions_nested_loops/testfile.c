#include<stdio.h>
#include<ctype.h>

int main (void)
{
	int i = isalpha('a');
	int j = isalpha(';');

	printf("a: %d",i);
	printf(";: %d",j);
	return (0);
}

