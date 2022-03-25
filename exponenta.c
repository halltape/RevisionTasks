#include <stdio.h>
#include <math.h>

int main() {
    //This program prints the exponenta^(x) by 2 methods//

    double f1, f2, f3, f4, f5, expx, expxm;
    double x2, x3, x4, x5;
    int x;

    scanf("%d", &x);
    f1 = 1;         //Let's calculate the factorials from 1 to 5//
    f2 = f1*2;
    f3 = f2*3;
    f4 = f3*4;
    f5 = f4*5;

    x2 = pow(x,2);
    x3 = pow(x,3);
    x4 = pow(x,4);
    x5 = pow(x,5);

   printf("%.6lf\n", exp(x));       //using math.h//
   printf("%.6lf\n", expxm = 1 + (x/f1) + (x2/f2) + (x3/f3) + (x4/f4) + (x5/f5));    //using mathematics//

    return 0;
}