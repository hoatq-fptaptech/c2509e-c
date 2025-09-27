#include <stdio.h>
int main(){
    int n;
    printf("Nhap n=");
    scanf("%d",&n);
    int t = 0 ;
    for( ;n>0; ){
        t = t*10+ n%10;
        n = n/10;
    }
    printf("dao nguoc t=%d",t);
    return 0;
}