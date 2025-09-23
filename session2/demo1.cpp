#include <stdio.h>
int main(){
    // chương trình viết tại đây
    int n;
    printf("Nhập vào số nguyên cần kiểm tra:");
    scanf("%d",&n);
    int r;
    r = n%2;
    if(r==0){
        // nếu r==0 mà đúng
        printf("%d là số chẵn",n);
    }else{
        // nếu r==0 mà sai
        printf("%d là số lẻ",n);
    }
    return 0;
}