#include "data.h"
void danhGiaSV(SV xyz){

}
void inputStudent(SV *st){// tham tri
    printf("Nhap ten:");
    scanf("%s",st->name);
    printf("Nhap id:");
    scanf("%d",&st->id);
    printf("Nhap gpa:");
    scanf("%f",&st->gpa);
}
void outputStudent(SV st){
    printf("Ten:%s\n",st.name);
    printf("Ten:%d\n",st.id);
    printf("Ten:%f\n",st.gpa);
}
SV inputStudent2(){// tham tri
    SV st;
    printf("Nhap ten:");
    scanf("%s",st.name);
    printf("Nhap id:");
    scanf("%d",&st.id);
    printf("Nhap gpa:");
    scanf("%f",&st.gpa);
    return st;
}