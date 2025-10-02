#include <stdio.h>
#include "../lib/thuvien.h"
int main(){
    int x = 10, y= 15;
    // mong muốn là tính tổng 2 số trên
    int kq = tinhtong(x,y);
    printf("Ket qua: %d",kq);
    // bool kt = kiemtrasochan(9);
    if(kiemtrasochan(12)){
        printf("Đúng là số chẵn");
    }else{
        printf("Không phải số chẵn");
    }
    menu();
    return 0;
}