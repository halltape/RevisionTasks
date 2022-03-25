#include <stdio.h>
#include <math.h>

int main ()
{
    //This program calculates four-digit numbers//

    int A, a4, a3, a2, a1;
    double x;
    scanf("%d", &A);

    a1 = A%10;
    a2 = A%100/10;
    a3 = A%1000/100;
    a4 = A/1000;

    x = (double)(a2 * a4) / (a1 * a3);

    printf("%.2lf\n", x);
    return 0 ;
}