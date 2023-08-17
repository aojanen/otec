#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int counter;
	for (counter = atoi(argv[1]); counter <= atoi(argv[2]) && counter <= 127; ++counter){
		printf("%d: %c\n", counter, counter);
	}
	return 0;
}
