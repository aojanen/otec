#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_div(int num, int *div, int size){
	int i;
	for (i = 0; i < size; size++){
		if ( num % div[i] == 0 ){
			return 1;
		}
	}
	return 0;
}

int main(int argc, char *argv[]){
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int divCount = argc - 3;
	int *divisors;
	int printed = 0;
	int i;

	if (argc == 3){
		for (i = a; i < b; i++){
			printf("%d ", i);
		}
		printf("%d\n", b);
		return 0;
	}

	divisors = (int *)malloc(divCount * sizeof(int));
	for (i = 0; i < divCount; i++){
		divisors[i] = atoi(argv[i + 3]);
	}

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
		} else {
			printf("\n");
		}

	free(divisors);
	
	return 0;	
}
