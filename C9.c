#include <stdio.h>
int main() {
    int a=10,b=14,c=12,larg;
    larg = (a > b)? ((a > c)? a : c) : (b > c)? b : c;
  printf("Largest number is: %d \n", larg);
  // if (a>b) {
  //   if (a>c) {
  //     printf("Largest number is: %d", a);
  //   }
  //   else {
  //     printf("Largest number is: %d", c);
  //   }
  // }
  // else if (b>c) {
  //   printf("Largest number is: %d", b);
  // }
  // else {printf("Largest number is: %d", c);}
}