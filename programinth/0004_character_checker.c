#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char m[10000];

    scanf("%s", &m);
    
    int z = 0;

    for (int i = 0; i < strlen(m); i++) {
        char c = m[i];

        int tz = 0;

        if (c == toupper(c)) {
            tz = 1;
        }
        if (c == tolower(c)) {
            tz = -1;
        }

        if (z == 0) {
            z = tz;
        } else if (z != tz) {
            printf("Mix");
            return 0;
        }
    }

    if (z == 1) {
        printf("All Capital Letter");
    } else {
        printf("All Small Letter");
    }

    return 0;
}