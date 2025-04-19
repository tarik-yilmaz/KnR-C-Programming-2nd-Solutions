/* Exercsise 1 - 6. 
 * Verify that the expression getchar() != EOF is 0 or 1. 
 */

# include <stdio.h>

int main()
{
    int c = getchar() != EOF;

    // If we print the the integer value of c after any input, we get 1 otherwise 0
    printf("%d", c);
}
