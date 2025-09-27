#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    if(x==1){
        printf("A");
    }else if(x==2){
        printf("B");
    }else if(x==3){
        printf("C");
    }else{
        printf("D");
    }

    switch(x){
        case 1: printf("A");break;
        case 2: printf("B");break;
        case 3: printf("C");break;
        default:printf("D");
    }

    if(x>10){
        printf("A");
    }else{
        printf("B");
    }

    switch(x>10){
        case 1: printf("A");break;
        default: printf("B");
    }
}