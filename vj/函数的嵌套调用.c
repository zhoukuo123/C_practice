#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;
    if (max < b) {
        max = b;
    } else if (max < c) {
        max = c;
    }
    return max;
}

int min3(int a, int b, int c) {
    int min = a;
    if (min > b) {
        min = b;
    } else if (min > c) {
        min = c;
    }
    return min;
}

int sum(int a, int b, int c) {
    int sum1 = max3(a, b, c) + min3(a, b, c);
    return sum1;
}

int main(int argc, char *argv[]) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum2;
    sum2 = sum(a, b, c);
    printf("Max+Min=%d", sum2);
    return 0;
}
