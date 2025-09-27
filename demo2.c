#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("Nhap a=");
    scanf("%f",&a);
    printf("Nhap b=");
    scanf("%f",&b);
    printf("Nhap c=");
    scanf("%f",&c);
    // ax^2 + bx + c = 0
    float delta = b*b - 4*a*c;
    if(delta < 0){
        printf("PT vô nghiệm");
    }
    if(delta == 0){
        float x = -b/(2*a);
        printf("PT có nghiệm kép: %f",x);
    }
    if(delta > 0 ){
        float x1 = (-b+sqrt(delta))/ (2*a);
        float x2 = (-b-sqrt(delta))/ (2*a);
        printf("PT có 2 nghiệm: %f và %f",x1,x2);
    }

    return 0;
}