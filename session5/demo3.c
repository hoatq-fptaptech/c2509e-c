#include <stdio.h>
int main(){
    int n;

    do{
        printf("Nhap số nguyên dương(>0) n=");
        scanf("%d",&n);
    }while (n <= 0); // nếu n <=0 thì nhập lại

    printf("số vừa nhập n=%d",n);

    return 0;
}