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

    int kiluc = 0;
    int thangmay = 0;
    for(int i=0;i<n;i++){
        if(players[i] > 0){
            thangmay++;
            if(thangmay > kiluc){
                kiluc = thangmay;
            }
        }else{
            thangmay = 0;
        }
    }
    printf("kiluc = %d\n",kiluc);
    return 0;
}