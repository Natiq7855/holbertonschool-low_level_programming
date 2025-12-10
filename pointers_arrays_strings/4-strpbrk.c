#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
unsigned int i = 0;
unsigned int a = 0;
unsigned int t = 0;
int check;

while (accept[a] != '\0')
{
a++;
}
while (s[i] != '\0')
{
check = 0;
for (t < a; t++)
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
