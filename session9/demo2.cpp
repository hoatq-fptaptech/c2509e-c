#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p = (int *)malloc(5 * sizeof(int));// hiểu: int p[5];
    for(int i=0;i<5;i++){
        // p[i] = i*2 + 1;
        *(p+i) = i*2 + 1;// cách viết sử dụng con trỏ
    }
    // giả sử cần thêm 3 phần tử nữa cho mảng
    // thay vì code lại hoặc nhập lại từ đầu, thì tăng kích thước mảng lên
    p = (int *)realloc(p,8 * sizeof(int));
    for(int i=5;i<8;i++){
        *(p+i) = i*2 + 1;
    }
    // giải phóng ô nhớ khi không dùng nữa
    free(p);
    return 0;
}
