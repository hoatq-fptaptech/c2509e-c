#include <stdio.h>
int main(){
    int menu;
    do{
        printf("\nMenu:\n");
        printf("1. Chuc nang 1\n");
        printf("2. Chuc nang 2\n");
        printf("3. Chuc nang 3\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang (0-3): ");
        scanf("%d",&menu);

        switch (menu)
        {
        case 1:
        {
                int a, b;
                printf("Nhap 2 so a, b: ");
                scanf("%d %d",&a,&b);
                printf("Tong a + b = %d\n", a + b);
                break;
            }
           
        case 2:
            {
                int a, b;
                printf("Nhap 2 so a, b: ");
                scanf("%d %d",&a,&b);
                printf("Hieu a - b = %d\n", a - b);
                break;
            }
        case 3:
            {
                int a, b;
                printf("Nhap 2 so a, b: ");
                scanf("%d %d",&a,&b);
                printf("Tich a x b = %d\n", a * b);
                break;
            }
        case 0:
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("Chon sai, vui long chon lai!\n");
            break;
        }
    }while (menu != 0);

    return 0;
}   