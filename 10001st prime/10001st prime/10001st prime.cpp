/*
10001st prime

Problem 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

#include <iostream>

int main()
{
	int max, isprime, primecount = 0, sum = 0;

	std::cout << "Generating primes\n";
	for (int i = 2; i < 1000000; i++)
	{
		max = i / 2;
		isprime = 1;

		for (int j = 2; j <= max; j++)
		{
			if (i % j == 0)
			{
				isprime = 0;
				break;
			}
		}
		if (isprime == 1)
		{
			primecount++;
			if (primecount == 10001)
			{
				sum = i;
			}		
		}
		
		if (sum == i)
			break;
	}
	std::cout << sum;
}