#include <stdio.h>
int main() {
int i;
printf("Enter your age:-");
scanf("%d",&i);
if (i>=18) {
    printf("You are eligible for voting");
}
else {printf("You are not eligible for voting");}
}