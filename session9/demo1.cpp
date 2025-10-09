#include <stdio.h>
#include <iostream>
int main(){
    int *p; // p là biến con trỏ chứ ko phải *p
    float *f; // f là biến con trỏ quản lý các ô nhớ số thực float

    int x = 20;
    // &x -> địa chỉ ô nhớ của x trong memory
    std::cout << &x; // print &x;
    p = &x;
    printf("\n"); // xuống dòng cho dễ nhìn
    std::cout << p;
    printf("\n"); 
    std::cout << *p;
    // x = x - 10;
    *p = *p - 10;
    printf("\n"); 
    std::cout << x;
    int y = 50;
    p = &y;
    *p = *p - 20;
    printf("\n"); 
    std::cout << y;
    return 0;
}

