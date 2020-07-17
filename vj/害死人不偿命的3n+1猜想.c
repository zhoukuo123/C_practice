#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            cnt++;
        } else {
            int m = 3 * n + 1;
            m /= 2;
            n = m;
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}

