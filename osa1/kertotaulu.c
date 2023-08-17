#include <stdio.h>

int main(void){
	int rivi = 0;
	int sarake = 0;
	int tulos;
	for (; rivi < 16; ++rivi){
		for ( sarake = 0; sarake < 16; ++sarake){
			if ( sarake == 0){
				if (rivi == 0){
					printf("%4s", "x");
				}
				else {
					printf("%4i", rivi);
				}
			} else {
				if (rivi==0){
					tulos = 1 * sarake;
				} else {
					tulos = rivi * sarake;
				}
				printf("%4i", tulos);
			}
			if ( sarake == 15 ){printf("\n");}
		}
	}
	return 0;
}
