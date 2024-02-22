#include <stdio.h>
#include <math.h>
int main() {
    int i;
    printf("Radius:-");
    scanf("%d", &i);
    float pi=3.14;
    float area=pi*pow(i,2);
    float circumfrence=2*pi*i;
    printf("your area is %f \n", area);
    printf("your circumfrence is %f",circumfrence);
    }
