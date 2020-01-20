#include <stdio.h>
struct time {
    int h;
    int m;
    int s;
};
int main(int argc,char *argv[]) {
    struct time t;
    int n;
    scanf("%d:%d:%d", &t.h, &t.m, &t.s);
    scanf("%d", &n);
    
    if (t.s+n >= 60) 
    {
        t.s = t.s + n - 60;
        t.m++;
        if (t.m == 60) 
        {
            t.m = 0;
            t.h++;
            if (t.h > 23) 
            {
                t.h = 0;
            }
        }
    }
    else 
    {
        t.s = t.s + n;
    }
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
    return 0;
}
