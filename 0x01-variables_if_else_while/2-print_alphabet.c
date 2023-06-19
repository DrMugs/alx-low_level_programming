#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

  int i = 0;

  for (i = 0; i < alphabet.length; i++)

{
  putchar(alphabet[i]);
}
  return (0);
}
