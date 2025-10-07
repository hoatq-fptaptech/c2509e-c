#include <stdio.h>
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    int players[n];

    for(int i=0;i<n;i++){
        printf("nhap gia tri %d =",i);
        scanf("%d",&players[i]);
    }
    // tìm số lớn nhất và nhỏ nhất trong mảng
    
    return 0;
}