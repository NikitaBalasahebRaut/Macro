//program to demonstrate the concept of predefine macro __DATE__

#include<stdio.h>

int main()
{
  printf("Date of compilation is\n %s",__DATE__);
  
  return 0;
}
/*
output
Date of compilation is
 Dec 15 2020
*/