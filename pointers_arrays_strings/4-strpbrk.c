#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
unsigned int i = 0;
unsigned int a = 0;
unsigned int t = 0;

while (accept[a] != '\0')
{
a++;
}
while (s[i] != '\0')
{
for (t = 0; t < a; t++)
{
if (s[i] == accept[t])
{
return (&s[i]);
}
}
i++;
}
return (NULL);
}
