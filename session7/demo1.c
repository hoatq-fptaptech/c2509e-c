#include <stdio.h>
int main(){
    int players[10] = {1,2,3,4,5,6,7,8,9,10};

    // in ra người ở đầu danh sách
    printf("first item: %d \n",players[0]);
    // in ra người cuối cùng
    printf("last item: %d \n",players[9]);
    
    for(int i=0;i<10;i++){
        printf("%d \t",players[i]);
    }
    
    players[5] = 19; // int x; x = 19;
    scanf("%d",&players[5]);// scanf("%d",&x);

    for(int i=0;i<10;i++){
        scanf("%d",&players[i]);
    }

    return 0;
}