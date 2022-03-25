#include <stdio.h>

int main() {
    // put your code here
    int a, res;
    float b, c, d;
    scanf("%d", &a);
    b = a%10;
    printf("%f\n", b);

    c = a%100/10;
    printf("%f\n", c);

    d = a/100;
    printf("%f\n", d);

    res = b + c + d;
    printf("%d\n", res);

    return 0;
}