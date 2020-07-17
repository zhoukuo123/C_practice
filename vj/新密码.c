#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, k;
    scanf("%d %d", &n, &k);
    int i, j;
    char mima[101] = {0};
    i = 'a';
    for (j = 0; j < n; j++) {
        mima[j] = i;
        i++;
        if (i == 'a' + k) {
            i = 'a';
        }
    }
    printf("%s\n", mima);
    return 0;
}
