#include<stdio.h>

/**
 * main: code stars
 *
 * return 0: success
 */
int main(void)
{
char s[] = "Size of a ";
printf("%s char: %lu byte(s)\n",s, sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("%s long int: %lu byte(s)\n",s , sizeof(long int));
printf("%s long long int: %lu byte(s)\n",s , sizeof(long long int));
printf("%s float: %lu byte(s)\n",s, sizeof(float));
return (0);
}
