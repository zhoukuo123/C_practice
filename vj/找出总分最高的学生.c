#include <stdio.h>

struct student {
    char number[6];
    char name[11];
    int score[3];
};

int main(int argc, char *argv[]) {
    int N;
    scanf("%d", &N);
    if (N == 0) {
        return 0;
    } else {
        struct student stu[N];
        int i;
        for (i = 0; i < N; i++) {
            scanf("%s %s %d %d %d", stu[i].number, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        }
        int sum[10] = {0};
        for (i = 0; i < N; i++) {
            sum[i] += stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
        }
        int max = sum[0];
        int x = 0;
        for (i = 1; i < N; i++) {
            if (max < sum[i]) {
                max = sum[i];
                x = i;
            }
        }
        printf("%s %s %d", stu[x].name, stu[x].number, max);
        return 0;
    }
}
