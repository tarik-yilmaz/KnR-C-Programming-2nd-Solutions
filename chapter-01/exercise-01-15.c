/* Exercise 1.15.
 * Rewrite the temperature conversion program of Section 1.2 to use a
 * function for conversion.*
 */

#include <stdio.h>

void temperature_converter(char input);

int main()
{
    char input;

    printf("Enter c for Celsius or f for Fahrenheit: ");
    scanf(" %c", &input);

    temperature_converter(input);

    return 0;
}

void temperature_converter(char input)
{
    double lower = 0, upper = 300, step = 20;
    double fahr, celsius;

    if (input == 'f')
    {
        fahr = lower;
        printf("Fahrenheit \t Celsius\n");
        while (fahr <= upper)
        {
            celsius = (5.0 / 9.0) * (fahr - 32);
            printf("%6.1lf \t\t %3.1lf\n", fahr, celsius);
            fahr += step;
        }
    }

    if (input == 'c')
    {
        celsius = lower;
        printf("Celsius \t Fahrenheit\n");
        while (celsius <= upper)
        {
            fahr = (9.0 / 5.0) * celsius + 32;
            printf("%6.1lf \t\t %3.1lf\n", celsius, fahr);
            celsius += step;
        }
    }
}
