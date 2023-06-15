#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char s[] = "Size of a ";
printf("%schar: %lu byte(s)\n", s, sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("%slong int: %lu byte(s)\n", s, sizeof(long int));
printf("%slong long int: %lu byte(s)\n", s, sizeof(long long int));
printf("%sfloat: %lu byte(s)\n", s, sizeof(float));
return (0);
}
