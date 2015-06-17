#include <stdio.h>
#include "sls.h"
#define SIZE 15


int main() {
	char str[SIZE];
	char substr[SIZE];

	printf("Enter string: ");
	scanf("%14s", str);

	remove_string(str, 2, 4);

	printf("%s\n", str);

	printf("Enter string: ");
	scanf("%14s", str);


	sub_string(str, 2, 29, substr);

	printf("%s\n", substr);
	return 0;
}
