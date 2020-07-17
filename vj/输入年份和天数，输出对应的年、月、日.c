# include <stdio.h>

void month_day(int year, int yearday, int *pmonth, int *pday);

int main(void) {
    int day, month, year, yearday; /*  定义代表日、月、年和天数的变量*/
    scanf("%d%d", &year, &yearday);
    month_day(year, yearday, &month, &day);/* 调用计算月、日函数  */
    printf("%d %d %d\n", year, month, day);
    return 0;
}

void month_day(int year, int yearday, int *pmonth, int *pday) {
    int monthping[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int monthrun[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int sum = 0;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        for (i = 0; sum <= yearday; i++) {
            sum += monthrun[i];
            *pmonth = i + 1;
        }
        *pday = yearday - (sum - monthrun[i - 1]);
    } else {
        for (i = 0; sum <= yearday; i++) {
            sum += monthping[i];
            *pmonth = i + 1;
        }
        *pday = yearday - (sum - monthping[i - 1]);
    }
}
