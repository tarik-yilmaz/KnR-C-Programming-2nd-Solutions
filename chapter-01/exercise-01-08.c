/* Exercise 1 - 8. 
 * Write a program to count blanks, tabs, and newlines. 
 */

#include <stdio.h>

int main()
{
    int bl = 0, tb = 0, nl = 0;

    int c;

    printf("Type input (Ctrl+D to end on Unix / Ctrl+Z on Windows):\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++bl;
        }
        if (c == '\t') {
            ++tb;
        }
        if (c == '\n') {
            ++nl;
        }    
    }
    printf("Number of blanks: %d\n", bl);
    printf("Number of tabs: %d\n", tb);
    printf("Number of newlines: %d\n", nl);
}
