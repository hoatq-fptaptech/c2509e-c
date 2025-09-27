#include <stdio.h>
int main(){
    int n;
    printf("Nhap n=");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        // các số nhỏ hơn n
        if(i%2!=0){
            printf("%d là số lẻ\n",i);
        }
    }

    return 0;
}