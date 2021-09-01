/*
Smallest multiple

Problem 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>

int main()
{
    int arr[20];
    int sum = 0, h = 2;

    //Populate array from 1 to 20
    for (int i = 0; i < 20; i++)
    {
        arr[i] = i + 1;
    }  
    
    for (int i = 1; i < h; i++)         //Generate a new number for the array to be tested with
    {
        for (int ii = 0; ii < 20; ii++) //Test Generated number with array
        {
            h = i + 2;
            
            if (i % arr[ii] != 0)
                break;
    
            if (ii == 19)               //If we get to this point and have gone through the entire array
            {                           //array with out breaking then we have found the number we are looking for
                sum = i;
            }
        }
        
        if (sum == i)
            break;
    }
    std::cout << sum;
}