#include<stdio.h>
int main()
{
  int a  ,b ,c , d ,e , f , g;
  printf("Enter the 3-digit no. whose sum is to be found-\t\t");
  scanf("%d", &a);
  b = a%10;
  f = a%100;
  c = f/10;
  g = a%1000;
  d = g/100;
  e = b + c + d;
  printf("The digits are %d , %d , %d  and the sum is = %d ", b, c ,d, e);

}
