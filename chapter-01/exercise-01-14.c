/* Exercise 1-14.
 * Write a program to print a histogram of the frequencies of different characters
 * in its input.
 */

#include <stdio.h>

int main()
{
    int c;
    int array_of_characters[27] = {0}; // 0–25: A-Z, 26: Others

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            array_of_characters[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            array_of_characters[c - 'A']++;
        }
        else
        {
            array_of_characters[26]++;
        }
    }

    int max = 0;
    for (int i = 0; i < 27; i++)
    {
        if (array_of_characters[i] > max)
        {
            max = array_of_characters[i];
        }
    }

    // Draw histogram vertically
    for (int height = max; height > 0; height--)
    {
        for (int i = 0; i < 27; i++)
        {
            if (array_of_characters[i] >= height)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    // Print base line
    for (int i = 0; i < 27; i++)
    {
        printf("---");
    }
    printf("\n");

    // Print character labels
    for (int i = 0; i < 27; i++)
    {
        if (i == 26)
        {
            printf(" # "); // Special char label
        }
        else
        {
            printf(" %c ", 'A' + i);
        }
    }
    printf("\n");

    return 0;
}
