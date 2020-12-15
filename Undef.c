//Pogram to demonstrate the concept of undefine directive

#include<stdio.h>
#define VER 2.2
//#undef VER     compilation error

int main()
{
  printf("current version of software is %f",VER);
  return 0;
}
//output:current version of software is 2.200000