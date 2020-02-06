#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if(n% 10 > 5)
printf("the last digit of n is greater than 5: the string and is greater than 5")
if else()
printf("the last digit of n is 0: the string and is 0")
else()
printf("the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0")
return (0);
}
