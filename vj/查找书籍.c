#include <stdio.h>
struct book {
    char name[31];
    double price;
};
int main(int argc,char *argv[]) {
    int n;
    scanf("%d",&n);
    struct book s[n];
    int i;
    for(i=0;i<n;i++) {
        getchar();
        gets(s[i].name);
        scanf("%lf",&s[i].price);
    }
    double max=s[0].price;
    double min=s[0].price;
    int a=0,b=0;
    for(i=1;i<n;i++) {
        if(max<s[i].price) {
            max=s[i].price;
            a=i;
        }
        if(min>s[i].price) {
            min=s[i].price;
            b=i;
        }
    }
    printf("%.2lf, %s\n",max,s[a].name);
    printf("%.2lf, %s",min,s[b].name);
    return 0;
}
