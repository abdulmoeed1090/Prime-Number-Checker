// This is a simple program of c++ to check prime number

#include <iostream>
#include <cmath>
using namespace std;

// Declaring a function that checks if the number is prime or not
bool PrimeNumberChecker(int number)
{
    // checking if the number is divisible by any number less than it
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Main function
int main()
{

    // Declaring a variable
    int number;
    cout << "Enter number to be checked:\n";
    cin >> number;

    // Calling the function in switch case
    switch (PrimeNumberChecker(number))
    {
    case true:
        cout << "The number is prime" << endl;
        break;
    case false:

        cout << "The number is not prime!!";
    }

    return 0;
}