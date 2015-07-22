//
//  main.cpp
//  Quiz_2.6
//
//  Created by Jeff Seo on 2015-07-21.
//  Copyright (c) 2015 Jeff Seo. All rights reserved.
//

#include <iostream>

bool isPrime(int value);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Please enter a number:";
    int value;
    std::cin >> value;
    if (isPrime(value)) {
        std::cout << "The digit is prime\n";
    }
    else
    {
        std::cout << "The digit is not prime.\n";
    }
    return 0;
}

bool isPrime(int value)
{
    if (value == 2 || value == 3 || value == 5 ||
        value == 7) {
        return true;
    }
    return false;
}