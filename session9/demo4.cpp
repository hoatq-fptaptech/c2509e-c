#include <stdio.h>
void swap(int *a, int *b){ //hàm tham chiếu
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int tinhtong(int a, int b){ // hàm tham trị
    return a + b;
}
void printArray(int *ary, int n){
    for(int i=0;i<n;i++){
        printf("%d\t",*(ary+i));
    }
}
int main(){
    int x = 10, y = 20;
    // mong muốn đổi giá trị của x và y với nhau
    // int tmp = x;
    // x = y;
    // y = tmp; 
    swap(&x,&y); // sử dụng hàm tham chiếu
    printf("x=%d, y=%d",x,y);
    int t = tinhtong(10,19);
    return 0;
}