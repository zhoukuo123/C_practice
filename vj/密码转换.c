#include <stdio.h>
#include <string.h>

int main() {
    char miwen[200] = {0};
    int flag = 0;
    char zuihouyihang[10] = {0};
    while (strcmp(zuihouyihang, "ENDOFINPUT") != 0) {
        char kaishi[10] = {0};
        char jieshu[19] = {0};
        int i, j, k;
        if (flag != 1) {
            scanf("%s", kaishi);
            getchar();
            gets(miwen);
            scanf("%s", jieshu);
            for (i = 0; miwen[i] != '\0'; i++) {
                if (miwen[i] == 'A') {
                    miwen[i] = 'V';
                } else if (miwen[i] == 'B') {
                    miwen[i] = 'W';
                } else if (miwen[i] == 'C') {
                    miwen[i] = 'X';
                } else if (miwen[i] == 'D') {
                    miwen[i] = 'Y';
                } else if (miwen[i] == 'E') {
                    miwen[i] = 'Z';
                } else if (miwen[i] <= 'Z' && miwen[i] >= 'F') {
                    miwen[i] = miwen[i] - 5;
                }
            }
            printf("%s\n", miwen);
            scanf("%s", zuihouyihang);
        } else {
            for (i = 0; miwen[i] != '\0'; i++) {
                if (miwen[i] == 'A') {
                    miwen[i] = 'V';
                } else if (miwen[i] == 'B') {
                    miwen[i] = 'W';
                } else if (miwen[i] == 'C') {
                    miwen[i] = 'X';
                } else if (miwen[i] == 'D') {
                    miwen[i] = 'Y';
                } else if (miwen[i] == 'E') {
                    miwen[i] = 'Z';
                } else if (miwen[i] >= 'F' && miwen[i] <= 'Z') {
                    miwen[i] = miwen[i] - 5;
                }
            }
            printf("%s\n", miwen);
            scanf("%s", zuihouyihang);
        }
        flag = 0;
        if (strcmp(zuihouyihang, "START") == 0) {
            for (i = 0; i < 6; i++) {
                kaishi[i] = zuihouyihang[i];
            }
            getchar();
            gets(miwen);
            scanf("%s", jieshu);
            flag = 1;
        }

    }
    return 0;
}

