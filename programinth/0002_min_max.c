#include <stdio.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    int min = 2000000000;
    int max = -2000000000;

    for (int i = 0; i < n; i++)
    {
        int m = 0;
        scanf("%d", &m);

        if (m > max) {
            max = m;
        }

        if (m < min) {
            min = m;
        }
    }

    printf("%d\n%d", min, max);

    return 0;
}