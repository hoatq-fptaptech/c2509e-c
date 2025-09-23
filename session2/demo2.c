#include <stdio.h>
int main(){
    int a,b;
    printf("Nhap a:");
    scanf("%d",&a);
    printf("nhap b:");
    scanf("%d",&b);
    if(a==0 && b==0){
        printf("Phương trình vô số nghiệm");
    }else if(a == 0 && b!= 0){
        printf("Phương trình vô nghiệm");
    }else{
        float x;
        x = -(float)b/a;
        printf("x=%f",x); 
    }
    return 0;
}