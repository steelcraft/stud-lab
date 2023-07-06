#include <stdio.h>
#include <stdlib.h>

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
    return 0;
}
