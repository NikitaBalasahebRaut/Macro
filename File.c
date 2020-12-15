//program to demonstrate the concept of predefine macro __FILE__

#include<stdio.h>

int main()
{
  printf("Name of current file is \n%s",__FILE__);
  
  return 0;
}
/*output
Name of current file is
File.c
*/