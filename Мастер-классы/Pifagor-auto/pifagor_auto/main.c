#include <stdio.h>
#include <stdlib.h>
#include "pifagor.h"

int main(int argc, char *argv[])
{
    if (argc != 3){
        printf("Please specify the sizes of the cathets.\n");
        return 1;
    }

    double a, b;

    sscanf(argv[1], "%lf", &a);
    sscanf(argv[2], "%lf", &b);

    printf("a = %f\t b = %f\n", a, b);

    double result = pifagor(a, b);
    printf("result is %lf\n", result);
    return 0;
}
