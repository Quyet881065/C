#include <stdio.h>

int main(void) {
 int i,a, b, c, d;
  int tong1 , tong2, tong3;
  printf("i= ");
   scanf("%d", &i);
  printf("b= ");
   scanf("%d", &b);
  printf("c= ");
   scanf("%d", &c);
  printf("d= ");
   scanf("%d", &d);
  printf("a= ");
   scanf("%d", &a);
  
  printf("ket qua 1 : %d \n",  tong1 = ++i % 7);
   printf("ket qua 2  : %d \n",  tong2 = 5 *(c - 3 + d));
   printf("ket qua 3  : %d", tong3 = a*(b+c/d)-22 );
  
  
  return 0;
}