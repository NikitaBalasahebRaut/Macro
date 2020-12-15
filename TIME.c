//program to demonstrate the concept of predefine macro __TIME__

#include<stdio.h>

int main()
{
  printf("Time of preprocessing is\n %s",__TIME__);
  
  return 0;
}
/*
output
Time of preprocessing is
 12:34:53
*/