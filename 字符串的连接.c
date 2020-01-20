#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}
char *str_cat(char *s, char *t) {
    int i;
    while (*t != '\0') {
        s[strlen(s)] = *t++;
    }
    s[strlen(s)] = '\0';
    return s;
}
