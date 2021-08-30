/*
The prime 41, can be written as the sum of six consecutive primes:
41 = 2 + 3 + 5 + 7 + 11 + 13

This is the longest sum of consecutive primes that adds to a prime below one-hundred.

The longest sum of consecutive primes below one-thousand that adds to a prime, contains 21 terms, and is equal to 953.

Which prime, below one-million, can be written as the sum of the most consecutive primes?
*/

#include <iostream>

int main()
{
	int* primes = new int[1000000];
	int* sum = new int[1000000];
	int isprime, temp, cons = 0, tempcons = 0, max = 0, arrayplace = 0, tempsum = 0, sumhigh = 0;

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
			primes[arrayplace] = i;
			arrayplace++;
		}
	}

	std::cout << "Working out sum\n";

	for (int arr = 0; arr < arrayplace; arr++)//Removes one number from back of prime array
	{
		tempsum = 0;
		tempcons = 0;

		for (int z = arr; z < arrayplace; z++)//Adds one to front of prime array
		{
			tempsum += primes[z];

			if (tempsum < 1000000)
			{
				tempcons++;
				for (int o = 0; o < arrayplace; o++)//Checks through all primes for a match
				{
					if (tempsum == primes[o] && tempsum > sum[arr] && tempcons > cons)
					{
						cons = tempcons;
						sum[arr] = tempsum;
						std::cout << tempsum << "\n";
					}
				}
			}
			else
			{
				break;
			}
		}
	}

	for (int i = 1; i < arrayplace; i++)
	{
		while (sum[i] > sum[i - 1])
		{
			temp = sum[i];
			sum[i] = sum[i - 1];
			sum[i - 1] = temp;
			if (i != 1)
			{
				i--;
			}
		}
	}
	std::cout << sum[0] << "\n";
}
