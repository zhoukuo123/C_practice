#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]) {
    int n;
    scanf("%d",&n);
    int i,j;
    char str[300];
    int cnt=0;
    int sum;
    for(i=0;i<n;i++) {
        scanf("%s",str);
        int len=strlen(str);
        cnt=0;
        for(j=0;j<len;j++) {
            if(str[j]>='a'&&str[j]<='z') {
                cnt++;
            }
        }
        sum=len-cnt;
        printf("%d\n",sum);
    }
    return 0;
}
