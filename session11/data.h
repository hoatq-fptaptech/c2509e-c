#ifndef DATA_H
#define DATA_H

typedef struct Student{ // 848 bits
    char name[100];// member
    int id;
    float gpa;
}SV;

typedef union NumberMath //64 bits;
{
    int alpha;
    float beta;
    double gamma;
    // char genz[10];
}NumberMath;

// khai báo hằng số
enum {
    SUN,
    MOON,
    EARTH
};
enum DAYOFWEEK{
    SUN, // 0
    MON, // 1
    TUE, // 2
    WED, // 3
    THU, // 4
    FRI, // 5
    SAT // 6
};
enum MONTHS{
    JAN=1, // 1
    FEB, // 2
    MAT, // 3
    APR, // 4
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};
struct DOB // ngày sinh
{
    int date;
    enum MONTHS month;
    int year;

};

#endif