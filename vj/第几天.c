#include <stdio.h>

int main(int argc, char *argv[]) {
    int year, month, day;
    int i;
    int run[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ping[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    while (scanf("%d/%d/%d", &year, &month, &day) != EOF) {
        sum = 0;
        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
            for (i = 0; i < month - 1; i++) {
                sum += run[i];
            }
            sum += day;
            printf("%d\n", sum);
        } else {
            for (i = 0; i < month - 1; i++) {
                sum += ping[i];
            }
            sum += day;
            printf("%d\n", sum);
        }
    }
    return 0;
}
