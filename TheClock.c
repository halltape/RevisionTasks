#include <stdio.h>
#include <math.h>

int main()
{
    //This program calculates minutes and hours and show the time//
    int t;
    int h, m;
    scanf("%d", &t);

    h = t/3600;

    m = t/60%60;

    printf("%d %d", h, m);

    return 0;
}
