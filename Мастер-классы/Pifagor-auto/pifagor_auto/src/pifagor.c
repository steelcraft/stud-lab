#include "pifagor.h"
#include <math.h>

double my_sqrt(double x) {
    return sqrt(x);
}

double pifagor(double a, double b) {
    return my_sqrt(a*a + b*b);
}
