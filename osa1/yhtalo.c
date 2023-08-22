#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){
        double a, b, c, juuret, ekaJuuri, tokaJuuri;

        a = atof(argv[1]);
        b = atof(argv[2]);
        c = atof(argv[3]);
        /*selvitetään juurten määrä*/
        juuret = b*b-4*a*c;

        if (juuret < 0){
            printf("Ei ratkaisua\n");
            return 0;
        } else if (juuret == 0){
            ekaJuuri = -b/(2*a);
            printf("%.3f\n", ekaJuuri);
            return 0;
        } else {
            tokaJuuri = (-b + sqrt(b*b-4*a*c))/2*a;
            ekaJuuri = (-b - sqrt(b*b-4*a*c))/2*a;
            printf("%.3f %.3f\n", ekaJuuri, tokaJuuri);
            return 0;
        }

    return 0;
}
