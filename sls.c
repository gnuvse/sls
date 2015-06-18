#include <stdio.h>
#include <string.h>
#include "sls.h"
#define SIZE 15


int find_string(char source[], char find[]) {
	char *istr;


	istr = strstr (source, find);


	if (istr == NULL)
		return -1;
	else
		return istr - source;
}




void sub_string(char source[], int start, int count, char result[]) {

	if (count > str_len(source))
		count = str_len(source);

	for (int i = start, j = 0; i < count; i++, j++)
		result[j] = source[i];


	result[SIZE] = '\0';
}



void remove_string(char source[], int start, int count_remove) {
	int removal_position = count_remove + start;

	for (int i = start, j = removal_position; i < str_len(source); i++, j++)
		source[i] = source[j];
}



int str_len(char str[]) {
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return i;
}

