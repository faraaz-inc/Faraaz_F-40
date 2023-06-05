#include <stdio.h>
int main () {
    int num;
    printf ("Enter a Number: ");
    scanf("%d", &num);
    int counter = 0;
    while (num != 0) {
        num = num / 10;
        counter++;
    }
    printf ("No. of digits in the number is: %d\n", counter);
    return 0;
}