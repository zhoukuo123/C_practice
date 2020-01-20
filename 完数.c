#include <stdio.h>
int wanshu(int n) {
    int i;
    int sum=0;
    for(i=1;i<=n/2;i++) {
        if(n%i==0) {
            sum+=i;
        }
    }
    return sum;
}
int main(int argc,char *argv[]) {
    int n;
    scanf("%d",&n);
    int i;
    while(n--) {
        int num1,num2;
        int cnt=0;
        scanf("%d %d",&num1,&num2);
        if(num1<=num2) {
        for(i=num1;i<=num2;i++) {
            if(wanshu(i)==i) {
                cnt++;
            }
        }
        printf("%d\n",cnt);
        }
        else {
            for(i=num2;i<=num1;i++) {
                if(wanshu(i)==i) {
                cnt++;
                }
            }
        printf("%d\n",cnt);
        }
    }
    return 0;
}
