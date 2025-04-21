/* Exercise 1-18.
 * Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.
 */

#include <stdio.h>

#define MAXLINE 1000

int readLines(char s[], int length);

int main()
{
    char line[MAXLINE];
    int length;

    while ((length = readLines(line, MAXLINE)) >= 0)
    {
        if (length == 0) {
            continue;
        }

        printf("\nCleaned line: %s", line);

    }

    return 0;
}

int readLines(char line[], int maxLength)
{
    int c, i = 0;

    while (i < maxLength - 1 && (c = getchar()) != EOF && c != '\n')
    {
        line[i] = c;
        i++;
    }

    if (c == EOF && i == 0) {
        return -1;
    }

    while (i > 0 && (line[i - 1] == ' ' || line[i - 1] == '\t')) {
        i--;
    }

    if (i == 0) {
        line[0] = '\0';
        return 0;
    }

    line[i] = '\n';
    line[i + 1] = '\0';
    return i + 1;

}
