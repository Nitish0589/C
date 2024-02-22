//Wap a program to offer dicpunt on total bill amount. program should take total amount as input and calculate discount. if bill amount is less than 100. no discount, if bill amount is greater than or equal to 100 and less than to 500, then 10 percent dicount and if bill is greater than equal to 500 than 20 percent account0
#include <stdio.h>
int main() {
    int i;
    scanf("%d",&i);
    int j=i-(0.1*i);
    int k=i-(0.2*i);
    if (i<100) {
        printf("Your total amount is %d",i);
    }
    else if (i>=100 && i<500) {
        printf("Your total amount is %d",j);
    }
    else {
        printf("Your total amount is %d",k);
    }
}