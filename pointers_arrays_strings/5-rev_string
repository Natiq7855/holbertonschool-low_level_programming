#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to reverse.
 *
 * Description: This function swaps characters from the beginning
 * and end of the string, moving toward the center, effectively
 * reversing the string in place.
 */
void rev_string(char *s)
{
    int len = 0, i;
    char temp;

    /* Find the length of the string */
    while (s[len] != '\0')
        len++;

    /* Swap characters from start and end */
    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}
