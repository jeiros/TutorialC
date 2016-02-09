#include <stdio.h>

void printAddresses(int depth) {
	printf("Address of value %d is in depth: %p\n", depth, (void*) &depth);
	
	if (depth >0) {
		printAddresses(depth-1);
	}
}

int main(void) {
	printAddresses(5);
	return 0;
}
