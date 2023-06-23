#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

  int i;

  for (i = 0; i < 26; i++)
  {
    _putchar(alphabet[i]);
  }
  _putchar('\n');
  
}
