#include <stdio.h>
#include <math.h>

int main()
{
    //This program calculates the volumes of the cylinder and cone//
    int r, h;
    double volume_cyl, volume_cone, pi = 3.14159265358979323846;
    scanf("%d%d", &r, &h);
    volume_cyl = h *pi * pow(r, 2);
    volume_cone = 1./3. * h * pi * pow(r, 2);
    printf("%.2lf %.2lf", volume_cyl, volume_cone);

    return 0;
}
