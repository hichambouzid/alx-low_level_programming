#include "lists.h"
#include<stdio.h>
/**
 * befor_main - how to excute a function beffor main
 *
 * Return: void
 */
void befor_main(void) __attribute__((constructor));
void befor_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
