#include <stdio.h>

char *getmonth(int n);

int main() {
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if (s == NULL) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}

char *getmonth(int n) {
    char *month[12] = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November",
            "December"
    };
    int i;
    int flag = 0;
    for (i = 0; i < 12; i++) {
        if (n == i + 1) {
            flag = 1;
            return month[i];
        }
    }
    if (flag == 0) {
        return NULL;
    }
}

