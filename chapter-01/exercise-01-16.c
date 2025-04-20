/* Exercise 1-16. 
 * Revise the main routine of the longest-line program so it will correctly print
 * the length of arbitrary long input lines, and as much as possible of the text.
 */
/* Exercise 1-16.
 * Revise the main routine of the longest-line program so it will correctly print
 * the length of arbitrary long input lines, and as much as possible of the text.
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* there was a line */
        printf("\nLongest line (as much as possible):\n%s", longest);
    printf("Length: %d characters\n", max);

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i = 0;

    // save as much as possible
    while (i < lim - 1 && (c = getchar()) != EOF && c != '\n')
    {
        s[i] = c;
        ++i;
    }

    // if the buffer is full but the end of the line is not reached
    while (c != EOF && c != '\n')
    {
        ++i; // count further but don't save
        c = getchar();
    }

    // if the line ends with newline character, then count and save it if there is enough room
    if (c == '\n')
    {
        if (i < lim - 1)
        {
            s[i++] = c;
        }
        else
        {
            ++i;
        }
    }

    // Only if there is enough buffer, then put a null character at the end
    if (i < lim)
    {
        s[i] = '\0';
    }
    else
    {
        s[lim - 1] = '\0';
    }
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
