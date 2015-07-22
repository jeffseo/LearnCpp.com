Quiz 2.6 - Boolean Values

1) A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself. Write a program that asks the user to enter a single digit integer. If the user enters a single digit that is prime (2, 3, 5, or 7), print “The digit is prime”. Otherwise, print “The digit is not prime”.

Hint: Use if statements to compare the number the user entered to the prime numbers. Use a boolean to keep track of whether the user entered a prime number or not.

#LearnCpp Solutions

```C++
#include <iostream>
 
int main()
{
    using namespace std;
 
    cout << "Enter a single digit integer: ";
    int x;
    cin >> x;
 
    // We start by assuming the user did not enter a prime number
    bool prime(false);
 
    // Then we test to see if they did
    if (x == 2)
        prime = true;
    else if (x == 3)
        prime = true;
    else if (x == 5)
        prime = true;
    else if (x == 7)
        prime = true;
 
    if (prime)
        cout << "The digit is prime" << endl;
    else
        cout << "The digit is not prime" << endl;
 
    return 0;
}
```
