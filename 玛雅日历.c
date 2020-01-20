#include <stdio.h>
#include <string.h>
int main()
{
    char month[19][10] = {"pop", "no", "zip", "zotz", 
        "tzec","xul",
        "yoxkin","mol", "chen", "yax","zac",
         "ceh","mac","kankin","muan","pax",
        "koyab","cumhu","uayet"};
    char month1[20][10] = {"imix","ik","akbal","kan","chicchan","cimi",
    "manik","lamat","muluk", "ok", "chuen",
     "eb","ben","ix","mem","cib","caban","eznab",
    "canac","ahau"};    
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    int i, j;
    int day, year;
    int sum = 0;
    char month2[10];
    for (i = 0; i < n; i++) {
        scanf("%d. %s %d", &day, month2, &year);
        for (j = 0; j < 20; j++) {
            if (strcmp(month2, month[j]) == 0) {
                break;
            }
        }
        sum = year * 365 + j * 20 + day;
        printf("%d %s %d\n",
               sum % 13 + 1,
               month1[sum % 20],
               sum / 260 );
    }
    return 0;
}

