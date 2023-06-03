#include <stdio.h>
#include<math.h>
int main() {
    int num, og_num, digit, result = 0;
    printf("Enter a number: ");             //Promt the user to enter the number
    scanf("%d", &num); 
    og_num = num;
    int n = 0;
    while(num != 0) {                       //Get the number of digits in variable 'n'
        num = num / 10;
        n++;
    }
    num = og_num;                           //Reinitialize num to the original value
    while (num != 0) {  
        digit = num % 10;                   //Extract the digits of the number and store in the variable 'digit'
        result = result + pow(digit, n);    //Raise digit to the power of 'n' and add to the variable 'result'
        num = num / 10;                     
    }                   
    if (result == og_num) {                 //Check if result == original value of num
        printf("%d is an armstrong number\n", og_num);
    }
    else {
        printf("%d is not an armstrong number\n", og_num);
    }
}