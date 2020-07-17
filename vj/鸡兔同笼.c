#include <stdio.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d", &a);
    int ji, tu;
    int max, min;
    if (a % 2 == 1) {
        printf("0 0\n");
    } else {
        tu = a / 4;
        ji = a % 4 / 2;
        min = tu + ji;
        max = a / 2;
        printf("%d %d\n", min, max);
    }
    return 0;
}
