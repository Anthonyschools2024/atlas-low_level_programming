#include "main.h"
#include <stdio.h>

/**
 *put_half - prints half the string
 *@str: the input string
 */
void puts_half (char *str)
{

  int lin = 0;
  int mid;

  /* Find the length of the string/*
  while(str[len]!= "\0") {
       len++;
     }
     
     /* calculate the middle index*/
  mid = ('len' - 1) / 2;

  /* Adjsut the start index based on the length of the string*/
  int startIndex = ('len' % 2 == 0)? mid : mid + 1;

  /* Print the second half of the string*/
  printf("%.*s" , ('len' - startIndex), &str[startIndex]);
   
}
