#include <stdio.h>
int tinhtong(int a, int b){
    // cần làm gì và như thế nào sẽ viết ở đây
    int c = a + b;
    return c;
}
int phepnhan(int ti, int teo){
    int pn = ti * teo;
    return pn;
}
void menu(){
    printf("Chọn thực đơn:\n");
    printf("Lẩu ếch măng cay\n");
    printf("Vịt quay Bắc kinh\n");
    return ;// có thể viết hoặc không
}
bool kiemtrasochan(int x){ // bool chỉ có true/false
    if(x %2 == 0){
        return true;
    }
    return false; 
}