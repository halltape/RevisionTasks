#include <stdio.h>
#include <math.h>

int main ()
{
    //This program calculates difference between kilobytes in science and in the Windows//

    int K; // how many gigabytes do you have? //
    long long int res;
    scanf("%d", &K);

    res = (K * pow(2,30)) - (K * 1e9);


    printf("%lld\n", res);
    return 0 ;
}