#include <stdio.h>
#include <string.h>

int main() {
    char num[10000];
    while (scanf("%s", num) && strcmp(num, "0") != 0) {
        int j = 0, k;
        size_t i;
        int sum = 0;
        int sum1[10000];
        for (i = 0; i < strlen(num); i++) {
            sum += num[i] - '0'; //注意 
        }
        while (sum >= 10) {
            j = 0;//注意
            while (sum != 0) {
                sum1[j++] = sum % 10;
                sum /= 10;
            }
            for (k = 0; k < j; k++) {
                sum += sum1[k];
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
