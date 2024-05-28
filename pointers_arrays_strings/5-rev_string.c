#include "main.h"
/*
*/void rev_string(char *s)
{
int x;
int c;
int y;
for (c = 0; s[c] != '\0'; c++)
{
}
c = c - 1;
for (x = 0; x < c; x++)
{
y = s[x];
s[x] = s[c];
s[c] = y;
c--;
}
}
