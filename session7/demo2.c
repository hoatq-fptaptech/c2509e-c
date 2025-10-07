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
    int max = players[0];
    int min = players[0];
    for(int i=0;i<n;i++){
        if(players[i] > max){
            max = players[i];
        }
        if(players[i] < min){
            min = players[i];
        }
    }
    printf("max = %d\n",max);
    printf("min = %d\n",min);
    return 0;
}