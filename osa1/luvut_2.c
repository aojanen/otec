#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_div(int num, int *div, int size){
	for (int i = 0; i < size; ++size){
		if ( num / div[i] == 0 ){
			return 1;
		}
	}
	return 0;
}

int main(int argc, char *argv[]){
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int divCount = argc - 3;
	int divisors[divCount];
	int printed = 0;

	if (argc == 3){
		for (int i = a; i < b; ++i){
			printf("%d ", i);
		}
		printf("%d\n", b);
		return 0;
	}

	for (int i = 0; i < divCount; ++i){
		divisors[i] = atoi(argv[i + 3]);
	}

	 for (int i = a; i < b; ++i) {
        if (!is_divisible(i, divisors, divCount)) {
			if (printed) {printf(" ");}
            printf("%d", i);
			++printed;
        }
		if (!is_div(b, divisors, divCount)){
			if (printed) {printf(" ");}
			printf("%d\n", b);
		}
	return 0;
    }

	


	
}
