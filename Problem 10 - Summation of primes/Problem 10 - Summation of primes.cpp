//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
//Find the sum of all the primes below two million.


#include <iostream>

int main()
{
	long long int sum = 0;
	for (int i = 2; i < 2000000; i++)
	{
		int max = i / 2;
		int isprime = 1;

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
			sum += i;
		}
	}
	std::cout << sum;
}