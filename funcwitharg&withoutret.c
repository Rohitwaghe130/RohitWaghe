#include<stdio.h>
int sum(int n1, int n2);
int main () {

  int c = 4, d= 8;
  sum(c,d);

  return 0;
}

int sum(int n1,int n2)
{
  int addition;
  addition = n1 + n2;
  printf("Addition is %d", addition);
}