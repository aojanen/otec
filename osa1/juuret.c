#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){
    double nelioitava;
    double tulos;
    int i;   
    
    for (i = 2; i < argc; i++){
        nelioitava=atof(argv[i]);
        tulos = sqrt(nelioitava);
        printf("sqrt(%.*f) = %.*f\n", atoi(argv[1]), nelioitava, atoi(argv[1]), tulos); 
    }

    /* tätä looppiin, toimiiko $argv[1]?*/
    return 0;
}
