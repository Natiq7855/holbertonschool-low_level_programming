#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
int check;
int i = 0;
int a = 0;
int t;
int b = 0;
while (accept[a] != '\0')
{
a++;
}
while (s[i] != '\0')
{
check = 0;
for (t = 0; t < a; t++)
{
if (accept[t] == s[i])
{
check = 1;
}
}
if (check == 1)
{
b++;
}
else
{
break;
}
}
return (b);
}
