/* Exercise 1-13.
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical orientation is
 * more challenging.
 */

#include <stdio.h>

#define SIZE 20
int main()
{
    int c, character_count = 0, index = 0;

    int array[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        array[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            character_count++;
        }
        else if (character_count > 0 && index < SIZE)
        {
            array[index] = character_count;
            index++;
            character_count = 0;
        }
    }

    if (character_count > 0 && index < SIZE)
    {
        array[index++] = character_count;
    }

    /*
        // For horizontal output comment out everything below that block

        for (int j = 0; j < SIZE; j++) {
          int sum = array[j];
          printf("Word number %d: ", j + 1);
          while (sum > 0) {
            printf("-");
            sum--;
          }
            printf("\n");
        }
    */

    int max = 0;

    for (int i = 0; i < index; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    for (int height = max; height > 0; height--)
    {
        for (int i = 0; i < index; i++)
        {
            if (array[i] >= height)
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

    for (int i = 0; i < index; i++)
    {
        printf("---");
    }

    printf("\n");

    for (int i = 0; i < index; i++)
    {
        printf(" %d ", i + 1);
    }

    printf("\n");
}
