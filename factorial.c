#include<stdio.h>
int main () {
    int n, ans = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        ans = ans * i;
    }
    printf("Factorial of %d is: %d\n", n, ans);
    return 0;
}