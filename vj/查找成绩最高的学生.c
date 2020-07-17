#include <stdio.h>

struct student {
    int number;
    int score;
};

int main(int argc, char *argv[]) {
    int num;
    scanf("%d", &num);
    struct student stu[num];
    int i;
    for (i = 0; i < num; i++) {
        scanf("%d %d", &stu[i].number, &stu[i].score);
    }
    int max = stu[0].score;
    int cnt;
    for (i = 1; i < num; i++) {
        if (max < stu[i].score) {
            max = stu[i].score;
            cnt = i;
        }
    }
    printf("%d %d", stu[cnt].number, stu[cnt].score);
    return 0;
}
