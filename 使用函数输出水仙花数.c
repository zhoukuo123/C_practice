#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
int narcissistic(int number) {
    int i,j,k;
    k=number;
    int a[10];
    int cnt=0;
    for(i=0;number!=0;i++) {
        a[i]=number%10;
        number/=10;
        cnt++;
    }
    int x=1;
    int sum=0;
    for(i=0;i<cnt;i++) {
        x=1;
        for(j=0;j<cnt;j++) {
            x*=a[i];
        }
        sum+=x;
    }
    if(sum==k) {
        return 1;
    }
    else {
        return 0;
    }
}
void PrintN(int m,int n) {
    int a[10000];
    int i;
    int j=0;
    int cnt=0;
    for(i=m+1;i<n;i++) {
        if(narcissistic(i)==1) {
            a[j++]=i;
            cnt++;
        }
        
    }
    int flag=0;
    for(i=0;i<cnt-1;i++) {
        flag=0;
        for(j=0;j<cnt-i-1;j++) {
            if(a[j]>a[j+1]) {
                int t;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                flag=1;
            }
        }
        if(flag==0) {
            break;
        }
    }
    for(i=0;i<cnt;i++) {
        printf("%d\n",a[i]);
    }
}
