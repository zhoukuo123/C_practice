#include <stdio.h>
struct work {
    char name[10];
    double basemoney;
    double fluemoney;
    double output;
    double input;
};
int main(int argc,char *argv[]) {
    int N;
    scanf("%d",&N);
    struct work worker[N];
    int i,j,k;
    for(i=0;i<N;i++) {
        scanf("%s %lf %lf %lf",worker[i].name,&worker[i].basemoney,&worker[i].fluemoney,&worker[i].output);
    }
    
    for(i=0;i<N;i++) {
        worker[i].input=worker[i].basemoney+worker[i].fluemoney-worker[i].output;
    }
    for(i=0;i<N;i++) {
        printf("%s %.2lf\n",worker[i].name,worker[i].input);
    }
    return 0;
}
