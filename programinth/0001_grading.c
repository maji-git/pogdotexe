#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int total = a + b + c;

    if (total >= 80)
    {
        printf("A");
    }
    else if (total >= 75)
    {
        printf("B+");
    }
    else if (total >= 70)
    {
        printf("B");
    }
    else if (total >= 65)
    {
        printf("C+");
    }
    else if (total >= 60)
    {
        printf("C");
    }
    else if (total >= 55)
    {
        printf("D+");
    }
    else if (total >= 50)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

    return 0;
}