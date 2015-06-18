#include <stdio.h>
#include "sls.h"
#define SIZE 15


int main() {
	char str[] = "chatterbox";
	char substr[SIZE];

	printf("position = %i\n", find_string(str, "ter"));

	remove_string(str, 2, 4);

	printf("%s\n", str);

	sub_string(str, 2, 29, substr);

	printf("%s\n", substr);


	return 0;
}
