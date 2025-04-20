/* Exercise 1-17.
 * Write a program to print all input lines that are longer than 80 characters.
 */

#include <stdio.h>

#define MAXLINE 1000

int getLineLength(char s[], int length);

int main()
{
    int len;
    int max = 0;

    char line[MAXLINE];

    while ((len = getLineLength(line, MAXLINE)) > 0)
    {
        if (len > 80)
        {
            printf("Input line longer than 80 characters:\n%s", line);
        }
    }

    return 0;
}

int getLineLength(char s[], int length)
{
    int c, i = 0;

    while (i < length - 1 && (c = getchar()) != EOF && c != '\n')
    {
        s[i] = c;
        i++;
    }

    if (c == '\n')
    {
        if (i < length - 1)
        {
            s[i++] = c;
        }
        else
        {
            i++;
        }
    }

    if (i < length)
    {
        s[i] = '\0';
    }
    else
    {
        s[length - 1] = '\0';
    }

    return i;
}
