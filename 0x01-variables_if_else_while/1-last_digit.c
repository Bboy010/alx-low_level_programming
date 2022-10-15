#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> 5932af542e8ae13f62d38e46d6e755d65657860f
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
<<<<<<< HEAD
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if ((n % 10) > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n",
                        n, n % 10);
        }
        else if ((n % 10) < 6 && (n % 10) != 0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n",
                        n, n % 10);
        }
        else
        {
                printf("Last digit of %d is %d and is 0\n",
                        n, n % 10);
        }
        return (0);
}

=======
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}
	return (0);
}
>>>>>>> 5932af542e8ae13f62d38e46d6e755d65657860f
