/* Exercise 1 - 11. 
 * How would you test the word count program ? What kinds of input are most
 * likely to uncover bugs if there are any? 
 */

/* We can test this program by entering nothing to see if the output is 0 0 0.
 * Only spaces, tabs, or newlines, sentences with special characters like exclamation mark or question mark,
 * or words without the newline characters etc.
 * Also we could use printf statements for debugging purposes to see the calculations before the final output.
 */

#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}
