#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *yingwendanci[20] = {NULL};
    int i, j, k;
    int cnt1 = 0;
    for (i = 0; i < 20; i++) {
        yingwendanci[i] = (char *)malloc(sizeof(char) * 10);
        scanf("%s", yingwendanci[i]);
        if (strcmp(yingwendanci[i], "#") == 0) {
            break;
        }
        else {
            cnt1++;
        }
    }
    int flag;
    char t[20];
    for (i = 0; i < cnt1-1; i++) {
        flag = 0;
        for (j = 0; j < cnt1-i-1; j++) {
            if (strlen(yingwendanci[j]) > strlen(yingwendanci[j+1])) {
                strcpy(t, yingwendanci[j]);
                strcpy(yingwendanci[j], yingwendanci[j+1]);
                strcpy(yingwendanci[j+1], t);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    for (k = 0; k < cnt1; k++) {
        printf("%s ", yingwendanci[k]);
    }
    return 0;
    
}

