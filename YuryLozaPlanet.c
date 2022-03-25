#include <stdio.h>
#include <math.h>
    int main ()
{
    //What the Earth's radius could be if it was flat//
    //If Earth was flat how long would the man fly from one side to another //

    int x, r, speed = 900;
    int time, pi = 3.1459;

    scanf("%d", &x);    //Type the Earth's radius//

    // The area of full Earth surface S = 4*pi*R^2 //
    // The area of a circle S = pi*r^2      where "r" is the radius of the circle Earth//
    // Do some manipulations with these formulas and you will get this: //
    r = 2 * sqrt(pow(x,2));

    // And how long will the pilot go from one side to another? //
    time = r * 2 / speed;

    printf("%d %d", r, time);

    return 0;
}