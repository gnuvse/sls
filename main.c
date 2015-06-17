#include <stdio.h>
#include "sls.h"
#define SIZE 15


int main() {
	char str[SIZE];


	printf("Enter string: ");
	scanf("%14s", str);

	remove_string(str, 2, 4);

	printf("%s\n", str);

	return 0;
}
