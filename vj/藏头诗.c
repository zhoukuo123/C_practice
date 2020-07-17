#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *cangtoushi[4] = {0};
    char b[10];
    int i, j = 0;
    for (i = 0; i < 4; i++) {
        cangtoushi[i] = (char *) malloc(sizeof(char) * 14);
        scanf("%s", cangtoushi[i]);
        b[j++] = cangtoushi[i][0];
        b[j++] = cangtoushi[i][1];
    }
    b[j] = '\0';
    printf("%s\n", b);
    return 0;
}

