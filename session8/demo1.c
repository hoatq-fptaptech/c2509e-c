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
    int total = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (players[i] % 2 != 0)
        {
            total += players[i];
            count++;
        }
    }
    
    // đã có tổng và số lượng số lẻ
    float avg = (float)total / count;
    printf("avg = %f\n",avg);
    return 0;
}