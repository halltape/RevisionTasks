#include <stdio.h>
#include <math.h>

int main ()
{
    //This program does backwards to any three-digit numbers//

    int k,a,b,c;
    scanf("%d", &k);
    a = k%10;
    b = k/10%10;
    c = k/100;
    printf("%d%d%d\n", a,b,c);

    return 0 ;
}