#include "main.h"

/**
 * cap_string - Capitalizes words after sentence-starts or at the beginning
 * @s: The string to modify
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *s)
{
    int i = 0;
    int capitalize_next = 1; /* capitalize first word and after . or ! */

    while (s[i] != '\0')
    {
        /* Capitalize if flag is set and character is lowercase */
        if (capitalize_next && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32; /* convert to uppercase */
            capitalize_next = 0;
        }
        /* Check for sentence-ending punctuation */
        else if (s[i] == '.' || s[i] == '!')
        {
            capitalize_next = 1;
        }
        /* Word separators do not affect sentence capitalization */
        else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
                 s[i] == ',' || s[i] == ';' || s[i] == '?' ||
                 s[i] == '"' || s[i] == '(' || s[i] == ')' ||
                 s[i] == '{' || s[i] == '}')
        {
            /* keep capitalize_next as is */
        }
        else
        {
            capitalize_next = 0;
        }

        i++;
    }

    return s;
}
