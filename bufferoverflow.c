#include <stdio.h>
#include <stdlib.h>

void main() {
	char *place;
	char *systemcommand;
	place = (char *)malloc(10);
	systemcommand = (char *)malloc(128);

	printf("memory address of place is: %d\n", place);
	printf("memory address of systemcommand is: %d\n", systemcommand);
	printf("the space in memory between the two is: %d\n", systemcommand - place);

	printf("please give your input:");
	gets(place); //gets is dangerous, but we want to use it in this case
	printf("your input starts at: %d\n", place);
	system(systemcommand);
}
