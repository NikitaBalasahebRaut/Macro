//program to demonstrate the concept of predefine macro __LINE__

#include<stdio.h>

int main()
{
  printf("current Line no is \n%d",__LINE__);
  
  return 0;
}
/*
output
current Line no is
7
*/