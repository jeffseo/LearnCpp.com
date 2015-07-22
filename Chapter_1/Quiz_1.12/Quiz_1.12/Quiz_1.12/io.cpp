//
//  io.cpp
//  Quiz_1.12
//
//  Created by Jeff Seo on 2015-07-20.
//  Copyright (c) 2015 Jeff Seo. All rights reserved.
//

#include <stdio.h>
#include <iostream>
int readNumber()
{
    int number;
    std::cout << "Enter the first integer: ";
    std::cin >> number;
    return number;
}

void writeAnswer(int x)
{
    std::cout << "The sum of inputs: " << x << std::endl;
}