#include <stdio.h>
#include <math.h>

int main ()
{
    //This program does the opposite of number//

    int K;
    int res;
    scanf("%d", &K);

    res = K - 1;
    res = abs(res);


    printf("%d\n", res);
    return 0 ;
}