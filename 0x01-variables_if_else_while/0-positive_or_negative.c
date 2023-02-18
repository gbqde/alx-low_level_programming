#Include < stdio.h >
#Include < stdlib.h >
#Include < time.h >

/**
 * main - Prints if numbers are either posituve, negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n:

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative\n", n)
	}

	return (0);
}
