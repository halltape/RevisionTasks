#include <stdio.h>
#include <math.h>

int main ()
{
    //This program calculates the younger number in int and the older number in fraction//

    int M,N;
    double old, young;
    scanf("%d%d", &M, &N);

    old = (double)M / N;
    old = old*10;
    old = (int)old%10;

    young = (M / N) % 10;


    printf("%.lf %.lf\n", young, old);

    return 0 ;
}