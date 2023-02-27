/**
 * swap_int - swap the value of tow integers
 *
 * @a: fisrt input adress
 *
 * @b: second input adress
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
