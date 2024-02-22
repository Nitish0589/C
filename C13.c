#include <stdio.h>
int main() {
  int a,b,c,d,e,f;
  printf("Enter the marks of 5 subjects:\n");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  f=(a+b+c+d+e)/5;
  switch(f/10){
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    printf("First division");
    break;
    case 5:
    printf("Second division");
    break;
    case 4:
    printf("Third division");
    break;
    default:
    printf("Fail");
  }
  return 0;
}