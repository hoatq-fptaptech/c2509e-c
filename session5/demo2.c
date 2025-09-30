#include <stdio.h>
int main(){
    int x = 10;

    while (x > 10)
    {
        printf("A");
    }
    
    do{ // cho làm thử 1 lần, sau đó mới kiểm tra điều kiện
         // nên dù điều kiện sai vẫn in ra 1 lần
        printf("B");
    }while (x > 10);
  
    

    return 0;
}