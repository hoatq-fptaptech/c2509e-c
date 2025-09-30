#include <stdio.h>
int main(){
   for(int i = 1; i <= 10; i++){
        printf("start i=%d\n", i);
        if(i== 5) {
            continue; // bỏ qua các câu lệnh bên dưới, quay lại vòng lặp
          //  break; // thoát khỏi vòng lặp
        }
        printf("end i=%d\n", i);
   }
    return 0;
}