/*
Largest palindrome product

Problem 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

100

999
*/

#include <iostream>

int main()
{
    int tempsum = 0, reversedNumber = 0, remainder, sum = 0, temprevsum = 0, highest = 0;

    for (int i = 100; i < 1000; i++)
    {
        for (int ii = 100; ii < 1000; ii++)
        {
           tempsum = i * ii;
           temprevsum = tempsum;
           reversedNumber = 0;
 
           while (temprevsum != 0)
           {
                remainder = temprevsum % 10;
                reversedNumber = reversedNumber * 10 + remainder;
                temprevsum /= 10;
           }
           
           if (tempsum == reversedNumber && tempsum > sum)
           {
               sum = tempsum;
           }
        }
    }   
    std::cout << sum << "\n";
}
