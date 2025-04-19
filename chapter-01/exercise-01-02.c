/* Exercise 1 - 2. 
 * Experiment to find out what happens when prints's argument string contains
 * \c, where c is some character not listed above.
 */

/* With \ and some specified characters are called escape sequences, like the newline character we currently have.
 * An escape squence changes how the compiler interprets character data in a literal.
 * \a -- Alert (Beep, Bell) (added in C89)
 * \b -- Backspace
 * \e -- Escape character
 * \f -- Formfeed Page Break
 * \n -- Newline 
 * \r -- Carriage Return
 * \t -- Horizontal Tab
 * \v -- Vertical Tab
 * \\ -- Backslash
 * \' -- Apostrophe or single quotation mark
 * \" -- Double quotation mark
 * \? -- Question mark (Used to avoid trigraphs)
 * .... */


#include <stdio.h>

int main()
{
    printf("hello, world\n");
}
