#include <stdio.h>

struct student {
    char id[6];
    char name[10];
    int score;
};

int main(int argc, char *argv[]) {
    int N;
    scanf("%d", &N);
    struct student stu[N];
    double ave;
    int i, j, k;
    for (i = 0; i < N; i++) {
        scanf("%s %s %d", stu[i].id, stu[i].name, &stu[i].score);
    }
    int sum = 0;
    for (i = 0; i < N; i++) {
        sum += stu[i].score;
    }
    ave = sum / N * 1.0;
    printf("%.2lf\n", ave);
    for (i = 0; i < N; i++) {
        if (stu[i].score < ave) {
            printf("%s %s\n", stu[i].name, stu[i].id);
        }
    }
    return 0;
}
