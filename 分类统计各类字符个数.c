#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
void StringCount(char *s) {
    int i;
    int daxie = 0, xiaoxie = 0, kongge = 0, shuzi = 0, qita = 0;
    for (i = 0; s[i] != 0; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            daxie++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            xiaoxie++;
        }
        else if (s[i] == ' ') {
            kongge++;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            shuzi++;
        }
        else {
            qita++;
        }
    }
    printf("%d %d %d %d %d\n", daxie, xiaoxie, kongge, shuzi, qita);
}
