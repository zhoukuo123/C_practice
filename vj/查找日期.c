#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex(char *s);

int main() {
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if (n == -1) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

int getindex(char *s) {
    char *xingqi[7] = {
            "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
            "Friday", "Saturday"
    };
    int i;
    int flag = 0;
    for (i = 0; i < 7; i++) {
        if (strcmp(s, xingqi[i]) == 0) {
            flag = 1;
            return i;
        }
    }
    if (flag == 0) {
        return -1;
    }
}
