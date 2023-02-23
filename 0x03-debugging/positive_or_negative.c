#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * positive_or_negative - assigns number to int i everytime
 * it executes, and prints it
 * @i: input
 * Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{

	int n;

	n = i;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
