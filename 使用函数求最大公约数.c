#include <stdio.h>

int gcd( int x, int y ){
    int max=x;
    int min=y;
    if(max<y) {
        max=y;
        min=x;
    }
    int a,b,c;
    a=max;
    b=min;

    while(1) {
        c=a%b;
        a=b;
        b=c;
        if(c==0) {
            break;
        }
    }
    return a;
}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}
