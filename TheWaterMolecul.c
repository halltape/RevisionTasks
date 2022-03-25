#include <stdio.h>
#include <math.h>

int main ()
{
    //This program calculates how many drops and molecules will be in the N glasses//

    int N; //the number of glasses//
    double weight_N = 249.5, weight_drop = 0.05, weight_m = 3e-23;
    double numbers_d, numbers_M;
    scanf("%d", &N);

    numbers_d = N * (weight_N / weight_drop);   //the numbers of drops in N glasses//
    numbers_M = (weight_drop / weight_m) * numbers_d;     //the numbers of molecules N glasses//


    printf("%.0lf %.3e", numbers_d, numbers_M);




    return 0 ;
}