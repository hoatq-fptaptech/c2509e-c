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


#endif