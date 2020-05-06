#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student {
    int num;
    int score;
}stu;
int main()
{
    int n;
    scanf("%d", &n);
    stu stuarray[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d %d", &stuarray[i].num, &stuarray[i].score);
    }
    int max = stuarray[0].score;
    int cnt;
    for (i = 1; i < n; i++) {
        if (max < stuarray[i].score) {
            max = stuarray[i].score;
            cnt = i;
        }
    }
    printf("%d %d", stuarray[cnt].num, stuarray[cnt].score);
    return 0;
}

