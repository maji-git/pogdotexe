#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = 0;i < b;i++) {
        a = a + 1;
    }

    printf("%d", a);

    return 0;
}