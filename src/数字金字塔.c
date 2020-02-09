#include <stdio.h>

void pyramid( int n ){
    int x=1;
    int i,j,k;
    for(i=1;i<=n;i++) {
        for(j=0;j<n-i;j++) {
            printf(" ");
        }
        for(k=0;k<i;k++) {
            printf("%d ",x);
        }
        x++;
        printf("\n");
    }
}
int main()
{
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}
