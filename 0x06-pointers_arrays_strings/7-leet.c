#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
 * @str: Pointer to the string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
    int i, j;
    char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
    char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

    /* Loop through the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        /* Loop through the letters array and check if the current character matches */
        for (j = 0; j < 10; j++)
        {
            if (str[i] == letters[j])
            {
                str[i] = numbers[j]; /* Replace the character with the corresponding number */
                break;
            }
        }
    }

    return (str);
}

