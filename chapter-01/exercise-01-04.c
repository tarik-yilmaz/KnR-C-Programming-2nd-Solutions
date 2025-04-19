/* Exercise 1 - 4. 
 * Write a program to print the corresponding Celsius to Fahrenheit table. 
 */

#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Celsius \t Fahrenheit\n");
    
    while (celsius < 300) {
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%6.1f \t\t %3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
