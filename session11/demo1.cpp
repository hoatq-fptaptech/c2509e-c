#include <iostream>
#include "data.h"
int main(){
    int x =10;
    std::cout <<"x="<<x<<"\n";// printf("x=%d",x);
    int y;
    std::cout<<"Nhập giá trị y=";
    std::cin >> y;
    std::cout << x<< "+"<<y<<"="<<x+y;

    int z;
    z = x > 10?x:y; // toans tử 3 ngôi
    // giai thich
    // if(x>10){
    //     z = x;
    // }else{
    //     z = y;
    // }
    std::cout << "Start\n";
    std::cout << "Doing...\n";
    goto Fn;
    std::cout << "Done...\n";
    Fn:
    std::cout << "Finish\n";

    int c;
    std::cout << "Input c=";
    std::cin>> c;
    std::cout << "Step 1";
    std::cout << "Step 2";
    if(c > 4)
        goto step56;
    else if(c < 0) 
        goto step7;
    std::cout << "Step 3";
    std::cout << "Step 4";
    step56: // đặt 1 cái label tại vị trí này
    std::cout << "Step 5";
    std::cout << "Step 6";
    step7:
    std::cout << "Step 7";

    int day = 4;
    if(day == MON){ // day == 4

    }else if(day == TUE){

    }else if(day == WED){

    }else if(day == THU){
        
    }

    return 0;
}