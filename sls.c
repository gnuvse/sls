#include <stdio.h>
#include "sls.h"
#define SIZE 15


int str_len(char str[]) {
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return i;
}


void remove_string(char source[], int start, int count_remove) {
	for (int i = start, j = count_remove + start - 1; i < str_len(source); i++, j++)
		source[i] = source[j];

	printf("%s\n", source);
}


