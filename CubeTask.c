#include <stdio.h>
#include <math.h>

int main()
{
    //This program calculates the cube area, the volume//
    int x;
    int full_area, one_area, volume;
    scanf("%d", &x);
    one_area = pow(x,2);
    full_area = one_area * 6;
    volume = pow(x,3);
    printf("%d %d %d", one_area, full_area, volume);

    return 0;
}
