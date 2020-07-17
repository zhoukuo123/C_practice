#include <stdio.h>
#include <string.h>

void shift(char *a, char *b, int len);

void shift(char *a, char *b, int len) {
    int j = 0;
    int i;
    int qian;
    int x = 0;
    int dian = 0;
    if (a[0] == '-') {
        x = 1;
    }
    for (i = 0; i < len; i++) {
        if (a[i] == '.') {
            dian = 1;
            break;
        }
    }
    int m, n;
    if (x == 0) {
        if (dian == 1) {
            for (i = len - 1; i >= 0; i--) {
                if (a[i] != '0') {
                    m = i;
                    break;
                }
            }
            for (i = 0; i < len; i++) {
                if (a[i] != '0') {
                    qian = i;
                    break;
                }
            }
            for (i = qian; i <= m; i++) {
                b[j++] = a[i];
            }
        } else {
            for (i = 0; i < len; i++) {
                if (a[i] != '0') {
                    qian = i;
                    break;
                }
            }
            for (i = qian; i < len; i++) {
                b[j++] = a[i];
            }
            b[j] = '.';
        }
    }
    if (x == 1) {
        if (dian == 1) {
            for (i = len - 1; i >= 0; i--) {
                if (a[i] != '0') {
                    m = i;
                    break;
                }
            }
            for (i = 1; i < len; i++) {
                if (a[i] != '0') {
                    qian = i;
                    break;
                }
            }
            for (i = qian; i <= m; i++) {
                b[j++] = a[i];
            }
        } else {
            for (i = 1; i < len; i++) {
                if (a[i] != '0') {
                    qian = i;
                    break;
                }
            }
            for (i = qian; i < len; i++) {
                b[j++] = a[i];
            }
            b[j] = '.';
        }
    }
}

int main(int argc, char *argv[]) {
    char str1[100000] = {0};
    char str2[100000] = {0};
    char str3[100000] = {0};
    char str4[100000] = {0};
    int sum;
    while (scanf("%s%s", str1, str2) != EOF) {
        int len = strlen(str1);
        int len1 = strlen(str2);
        shift(str1, str3, len);
        shift(str2, str4, len1);
        sum = strcmp(str3, str4);
        if (sum == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        memset(str1, 0, sizeof(char) * 10000);
        memset(str2, 0, sizeof(char) * 10000);
        memset(str3, 0, sizeof(char) * 10000);
        memset(str4, 0, sizeof(char) * 10000);
    }
    return 0;
}
