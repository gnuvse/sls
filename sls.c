#include <stdio.h>
#include "sls.h"
#define SIZE 15

void sub_string(char source[], int start, int count, char result[]) {
	for (int i = start, j = 0; i < count + 1 && j < SIZE - 1; i++, j++)
		result[j] = source[i];

	result[SIZE] = '\0';
}


void remove_string(char source[], int start, int count_remove) {
	int removal_position = count_remove + start - 1;

	for (int i = start, j = removal_position; i < str_len(source); i++, j++)
		source[i] = source[j];
}


int str_len(char str[]) {
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return i;
}

