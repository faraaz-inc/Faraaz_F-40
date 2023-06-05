#include<stdio.h>
int main () {
    int x, y;
    printf("Enter the value of base: ");
    scanf("%d", &x);
    printf("Enter the value of index: ");
    scanf("%d", &y);
    int ans = 1;
    for(int i = 0; i < y; i++) {
        ans = ans * x;
    }
    printf ("%d raised to the power of %d = %d\n", x, y, ans);
    return 0;
}