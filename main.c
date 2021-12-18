#include "get_next_line.h"
#include <stdio.h>
int main()
{
	char b = 'a';
	char *a = &b;
	FILE *ptr = fopen("text.txt", "r");
	int i = fileno(ptr);
	int j = 0;
	while (i < 5)
	{ 
		a = get_next_line(i);
		printf("%s", a);
		j++;
	}
}
