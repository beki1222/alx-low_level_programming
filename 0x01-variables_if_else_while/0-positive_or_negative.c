#include<stdlib.h>
#include<time.h>

/**
 * main - Postive or Negative - print sign of a random numbers
 * @void: Empty parameter list for main
 *
 * Description:this if/else statement delares the sign (positive
 * or negative ) of a random numbers. it also states it the value
 * is zero.
 * Return : 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand () - RAND_MAX / 2;
	if (n>0)
	{
		printf("n is postive\n",n);
	}
	elese if (n==0)
	{
		printf("n is zero\n",n);
	}
	elese
	{
		printf("n is neagative\n",n);
	}
	return (0);
}
		
