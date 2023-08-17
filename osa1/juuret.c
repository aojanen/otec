#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){
    int orgCount = argc - 2;
	int *org;
    int i;

    org = (double*) malloc (orgCount*sizeof(double));    
    
    for (i = 0; i < orgCount; i++){
        org[i]=argv[i+2];
    }

    printf("sqrt(%.$argv[1]f) = %.$argv[1]f", nelioitava, tulos ); /* tätä looppiin, toimiiko $argv[1]?*/
    return 0;
}