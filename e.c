#include <stdio.h>
#include <math.h>

int main() {
    //This program prints the exponenta //
    double exp4, exp5, exp6;
    double f1, f2, f3, f4, f5;

    f1 = 1;         //Let's calculate the factorials from 1 to 4//
    f2 = f1*2;
    f3 = f2*3;
    f4 = f3*4;
    f5 = f4*5;


    printf("%.5lf\n", exp4 = 1 + (1/f1) + (1/f2) + (1/f3));
    printf("%.5lf\n", exp4 = 1 + (1/f1) + (1/f2) + (1/f3) + (1/f4));
    printf("%.5lf\n", exp4 = 1 + (1/f1) + (1/f2) + (1/f3) + (1/f4) + + (1/f5));
    return 0;
}