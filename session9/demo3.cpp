#include <stdio.h>
#include <stdlib.h>
int max(int *ary,int size){
    // int max = ary[0];
    int m = *ary;
    for(int i=0;i<size;i++){
        if(*(ary+i)> m){
            m = *(ary+i);
        }
    }
    return m;
}
int main(){
    int *p;
    p = (int *)calloc(10 , sizeof(int)); // cũng giống malloc
    // khác: calloc khi cấp ô nhớ thì các giá trị bên trong sẽ là 0
    for(int i=0;i<10;i++){
        printf("Nhap gia tri %d: ",i);
        scanf("%d",p+i); // &p[i]
    }
    // int max = *p; // max = p[0];
    // for(int i=0;i<10;i++){
    //     if(*(p+i) > max){ // if(p[i] > max)
    //         max = *(p+i); // max = p[i]
    //     }
    // }
    // printf("Max = %d\n",max);
    printf("Max = %d\n",max(p,10));

    // tăng thêm 10 phần tử và nhập vào -> sau đó tìm lại max
    return 0;
}