#include <stdio.h>

struct friends {
    char name[11];
    int birthday;
    char number[18];
};

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    struct friends s[n];
    getchar();
    int i;
    for (i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].birthday);
        scanf("%s", s[i].number);
    }
    int j;
    int flag = 0;
    struct friends s1;
    for (i = 0; i < n - 1; i++) {
        flag = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (s[j].birthday > s[j + 1].birthday) {
                s1 = s[j];
                s[j] = s[j + 1];
                s[j + 1] = s1;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%s %d %s\n", s[i].name, s[i].birthday, s[i].number);
    }
    return 0;
}
