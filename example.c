#include <stdio.h>

int main(void) {
 int a= 5;
  int b= 6;
  int c= 7;

  int tong = a+b;
  int hieu= a-b;
  int tich= a*b;
  int thuong= a/b;

  int ketqua1 = (a<b);
  int ketqua2 = a >=b;
  int ketqua3 = a==b;
  int ketqua4 = a!=b;
  int ketqua5 = (a>b&&a>c);
  int ketqua6 = (a<b||a<c);
  int ketqua7 = !(a<b);

  printf("tong= %d\n", tong);
  printf("hieu= %d\n", hieu);
  printf("tich= %d\n", tich);
  printf("thuong= %d\n", thuong);

  printf("ketqua1= %d\n", ketqua1);
  printf("ketqua2= %d\n", ketqua2);
  printf("ketqua3= %d\n", ketqua3);
  printf("ketqua4= %d\n", ketqua4);
  printf("ketqua5= %d\n", ketqua5);
  printf("ketqua6= %d\n", ketqua6);
  printf("ketqua7= %d\n", ketqua7);
  
}