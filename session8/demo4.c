#include <stdio.h>
#include <string.h>
int main(){ 
    char str1[100]; // string (chuỗi ký tự) thực chất là mảng ký tự
    printf("nhap chuoi 1: ");
    // for(int i=0;i<100;i++){
    //     scanf("%c",&str1[i]); // đọc từng ký tự
    // }
    // int x;
    // scanf("%d",&x);
    scanf("%s",str1); // đọc chuỗi ký tự (đọc đến khoảng trắng thì dừng)  - %s thì không cần &
    printf("str1 = %s\n",str1);
    // bản chất là đọc từng ký tự cho đến khi gặp ký tự kết thúc chuỗi '\0'
    // str1 chính là địa chỉ của phần tử đầu tiên trong mảng
    int len = strlen(str1); // hàm strlen để lấy độ dài chuỗi - trả về số ký tự (không tính ký tự kết thúc chuỗi '\0')
    printf("do dai chuoi str1 = %d\n",len); // hàm strlen để lấy độ dài chuỗi
    char str2[100];
    strcpy(str2,str1); // hàm strcpy để sao chép chuỗi str1 sang str2- hiểu như str2 = str1
    printf("str2 = %s\n",str2);
    char str3[100] = "Hello"; // khởi tạo chuỗi ký tự
    int cmp = strcmp(str1,str3); 
    // hàm strcmp để so sánh 2 chuỗi - 
    // trả về 0 nếu bằng nhau, >0 nếu str1 > str3, <0 nếu str1 < str3
    // vis dụ 2 chuỗi: aaa và aab
    // so sánh ký tự đầu tiên: a == a -> so sánh ký tự 97- 97 = 0 -> tiếp tục
    // so sánh ký tự thứ 2: a == a -> so sánh ký tự 97- 97 = 0 -> tiếp tục
    // so sánh ký tự thứ 3: a < b -> so sánh ký tự 97 - 98 = -1 -> kết luận aaa < aab
    // nhỏ hơn có nghĩa là aaa nằm trước aab trong kiểu sắp xếp alphabet

    // ví dụ 2 chuỗi hello và xinchao -> keets qủa < 0 vì h < x --> hello nằm trước xinchao trong alphabet

    // == 0 -> 2 chuỗi giống nhau

    strcat(str1,str3); // hàm strcat để nối chuỗi str3 vào cuối chuỗi str1 => hiểu: str1 = str1 + str3
    strcat(str3," World"); // nối chuỗi " World" vào cuối chuỗi str3 => hiểu: str3 = str3 + " World"
    return 0;
}