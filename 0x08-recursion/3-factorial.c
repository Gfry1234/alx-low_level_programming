/**
 * factorial - a function that returns the factorial of a given number
 * @n: number to return the factorial from
 * Return: returns factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}