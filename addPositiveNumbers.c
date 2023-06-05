#include<stdio.h>
int main () {
    int num;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num >= 0) {
        sum = sum + num;
        printf("Enter a number: ");
        scanf("%d", &num);
    }
    printf("Sum of all positive integers is: %d\n", sum);
    return 0;
}