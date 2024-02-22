#include <stdio.h>
int main() {
  int a,b,c,d,e;
  float sum,per;
  printf("Enter the marks of 5 subjects");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  sum=a+b+c+d+e;
  per=sum/5;
  printf("The percentage is %f",per);
  if(per>=60){
    printf("First division");
  }
  else if(per>=50 && per<=59){
    printf("Second division");
  }
  else if(per>=40 && per<=49){
    printf("Third division");
  }
  else{
    printf("Fail");
  }
  return 0;
}