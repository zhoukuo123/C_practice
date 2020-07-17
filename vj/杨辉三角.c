#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    int i, j;
    while (scanf("%d", &n) != EOF) {
        int a[200][200];
        for (i = 0; i <= n - 1; i++) {
            a[i][0] = 1;
            a[i][i] = 1;
        }
        if (n > 2) {
            for (i = 2; i <= n - 1; i++) {
                for (j = 1; j <= i - 1; j++) {
                    a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
                }
            }

        }
        printf("%d\n", a[0][0]);
        for (i = 1; i <= n - 1; i++) {
            printf("%d", a[i][0]);
            for (j = 1; j <= i; j++) {
                printf(" %d", a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
