#include <stdio.h>

int main()
{
    int m = 0;
    int n = 0;

    int ax[100][100];
    int ay[100][100];

    scanf("%d", &m);
    scanf("%d", &n);

    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            int v = 0;
            scanf("%d", &v);

            ax[x][y] = v;
        }
    }

    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            int v = 0;
            scanf("%d", &v);

            ay[x][y] = v;
        }
    }

    
    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            printf("%d ", ax[x][y] + ay[x][y]);
        }
        printf("\n");
    }



    return 0;
}