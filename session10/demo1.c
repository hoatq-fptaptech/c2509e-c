#include <stdio.h>
#include "data.h"
#include "function.h"

int main(){
    // khai baos 1 biến s1 có kiểu dữ liệu là struct Student
    struct Student s1;
    printf("Nhap tên sv:");
    scanf("%s",s1.name);
    printf("NHap id sv:");
    scanf("%d",&s1.id);
    printf("Nhap GPA:");
    scanf("%f",&s1.gpa);
    struct Student s2;
    SV s3; 

    printf("Ten cua sv 1: %s",s1.name);
    printf("GPA cua sv 1: %f",s1.gpa);

    danhGiaSV(s1);

    NumberMath n1;
    n1.alpha = 12;
    n1.beta = 1.57;
    n1.gamma = 7.97435356;
    return 0;
}