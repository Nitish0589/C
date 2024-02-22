#include <stdio.h>
int main() {
int i;
int j;
int k;
printf("Enter your numbers:-");
scanf("%d",&i);
scanf("%d",&j);
scanf("%d",&k);
if (i>j && i>k) {
    printf("%d is greatest",i);
    }
else if (j>i && j>k) {
    printf("%d is greatest",j);
}
else {
    printf("%d is greatest",k);
}
}