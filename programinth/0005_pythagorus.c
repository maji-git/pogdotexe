#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    double c;

    c = sqrt(pow(a,2) + pow(b,2));

    printf("%.6lf", c);

    return 0;
}