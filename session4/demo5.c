#include <stdio.h>
int main(){
    int n;
    printf("Nhap n=");
    scanf("%d",&n);
    int t = 0 ;

    for(int i=0;i<n;i++){
        if(i%2 ==0 && i%3==0){
            t = i;
        }
    }

    printf("Số lớn nhất chia hết cả 2 và 3: %d",t);

    return 0;
}