#include <stdio.h>
#include <string.h>

int add(char s1, char s2, char *num, int f, int i) {
    int t = s1 + s2 + f;
    if (t < 106) {
        *num = (char) (t - 48);
        return 0;
    } else {
        *num = (char) (t - 58);
        return 1;
    }

}

int addsum(char *s1, char *s2, int len1, int len2, char *s, int f) {
    int i;
    if (len1 > len2) {
        for (i = 0; i < len2; i++) {
            f = add(s1[len1 - i - 1], s2[len2 - i - 1], &s[i], f, i);
        }
        for (; i < len1; i++) {
            f = add(s1[len1 - i - 1], '0', &s[i], f, i);
        }
    } else {
        for (i = 0; i < len1; i++) {
            f = add(s1[len1 - i - 1], s2[len2 - i - 1], &s[i], f, i);
        }
        for (; i < len2; i++) {
            f = add('0', s2[len2 - i - 1], &s[i], f, i);
        }
    }
    for (; f > 0; ++i) {
        f = add('0', '0', &s[i], f, i);
    }
    return i;
}

void display(char *s, int cnt) {
    int i;
    for (i = cnt - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    printf("\n");
}

int main() {
    char s1[10000] = {0};
    char s2[10000] = {0};
    char num[1000] = {0};

    while (scanf("%s%s", s1, s2) != EOF) {
        int f = 0;
        int len1 = strlen(s1);
        int cnt;
        int len2 = strlen(s2);
        cnt = addsum(s1, s2, len1, len2, num, f);
        display(num, cnt);
        memset(s1, '0', sizeof(char) * 10000);
        memset(s2, '0', sizeof(char) * 10000);
        memset(num, '0', sizeof(char) * 10000);

    }
    return 0;
}

