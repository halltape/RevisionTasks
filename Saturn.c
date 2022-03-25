#include <stdio.h>
#include <math.h>

int main()
{
    //This program calculates the width of the Saturn's ring and its area//
    int ri, ro, width ; //ri - the smallest radius || ro the biggest radius of the ring //
    double area, pi = 3.14159265358979323846;
    scanf("%d%d", &ri, &ro);

    area = (pi * pow(ro, 2)) - (pi * pow(ri, 2)); //The area of the Saturn's ring in km^2//
    area = area * 100; //Transfer kms to Ga//

    width = ro - ri;

    printf("%d %.2lf", width, area);

    return 0;
}
