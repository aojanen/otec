#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Check if number can be divided with given numbers

int is_div(int num, int *div, int size){
	int i;
	for (i = 0; i < size; size++){
		if ( num % div[i] == 0 ){
			return 1;
		}
	}
	return 0;
}

// Program gets n arguments, first two are numbers a and b. Then it prints all numbers
// between a and b which cannot be divided with optional other arguments.

int main(int argc, char *argv[]){
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int divCount = argc - 3;
	int *divisors;
	int printed = 0;
	int i;

// If there are no divisors, just print the numbers

	if (divCount == 0){
		for (i = a; i < b; i++){
			printf("%d ", i);
		}
		printf("%d\n", b);
		return 0;
	}

// Allocate space for divisors array

	divisors = (int *)malloc(divCount * sizeof(int));

// Fill divisors in array

	for (i = 0; i < divCount; i++){
		divisors[i] = atoi(argv[i + 3]);
	}

// Go through given interval and print accepted values
	for (i = a; i < b; i++) {
        if (!is_div(i, divisors, divCount)) {
			if (printed) {printf(" ");}
            printf("%d", i);
			++printed;
        }
    }

	if (!is_div(b, divisors, divCount)){
			if (printed) {printf(" ");}
			printf("%d\n", b);
		} else if (printed) {
			printf("\n");
		}

	free(divisors);
	
	return 0;	
}
