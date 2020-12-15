//Program for function like macro
#include<stdio.h>
#define SQR(x)(x*x)

int main()
{
 int side = 5;
 printf("Area of square is %d",SQR(side));
 return 0;
}
//output: Area of square is 25
