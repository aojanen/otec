#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int counter;
	for (counter = 1; counter < argc; ++counter){
		printf("%d: %s (pituus: %u)\n", counter, argv[counter], (unsigned int) strlen(argv[counter]));
	}
	return 0;
}
