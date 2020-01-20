# include<stdio.h>
int Bsearch(int *p, int n, int x);     
int main(void)   
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};    
    int x, m;
    scanf("%d",&x);                
    m = Bsearch(a, 10, x);
    if(m >= 0)   
        printf("Index is %d\n",m);
    else 
        printf( "Not Found\n");
		
    return 0;
}
int Bsearch(int *p, int n, int x) {
    int i;
    int flag = 0;
    for (i = 0; i < n; i++) {
        if (p[i] == x) {
            flag = 1;
            return i;
        }
    }
    if (flag == 0) {
        return -1;
    }
}
