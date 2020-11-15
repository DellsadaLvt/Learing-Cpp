// source -> compiler -> executate
#include<stdio.h>
#include<math.h>

int radius;
float TinhChuVi(int radius);

int main()
{
    
    printf_s(" test overall of int: %f \n", TinhChuVi(radius));
    return 0;
}

float TinhChuVi(int radius)
{
    printf("size of interger: %d \n", sizeof(int));
    scanf("%d", &radius);
    float chu_vi = radius*2*4*atan(1);
    return chu_vi;
}

