#include <stdio.h>
int main(int argc,char *argv[]) {
    int m,n;
    int i,j=0,k;
    int ge,shi,bai;
    int flag=0;
    int a[1000];
    while(scanf("%d %d",&m,&n)!=EOF) { 
        j=0;
        flag=0;
        for(i=m;i<=n;i++) {
            ge=i%10;
            shi=i/10%10;
            bai=i/100;
            if(i==ge*ge*ge+shi*shi*shi+bai*bai*bai) {
                a[j++]=i;
                flag=1;
            }
        }
        if(flag==1) {
            printf("%d",a[0]);
            for(i=1;i<j;i++) {
                printf(" %d",a[i]);
            }
            printf("\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}
