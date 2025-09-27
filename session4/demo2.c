#include <stdio.h>
int main(){
    int tk ;
    int year;
    printf("Nhập số tiền gửi:");
    scanf("%d",&tk);
    printf("Nhập số năm muốn gửi:");
    scanf("%d",&year);
    // sử dụng vòng lặp (loop)
    for(int i=0;i<year;i++){
        tk = tk + tk*5/100;
    }
    printf("tk = %d",tk);
    return 0;
}