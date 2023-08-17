#include <stdio.h>

int main(void){
	int i;
	printf("1");
	for (i = 2; i<100; i++){
		if (i%2==0 || i%3==0 || i%5==0) {
			continue;
		}
		printf(" %i", i);
	}
	printf("\n");
	return 9;
}
