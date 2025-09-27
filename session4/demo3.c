#include <stdio.h>
int main(){
    // input
    int n;
    printf("Nhap n=");
    int S = 0;
    // process
 
    for(int i=1;i<=n;i++){
        S = S + i;
    }
    
    // output
    printf("S=%d",S);
    return 0;
}