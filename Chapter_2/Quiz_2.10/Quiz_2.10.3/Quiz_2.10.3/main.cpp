//
//  main.cpp
//  Quiz_2.10.3
//
//  Created by Jeff Seo on 2015-07-23.
//  Copyright (c) 2015 Jeff Seo. All rights reserved.
//

#include <iostream>

bool isOperator(char c)
{
    if (c == '+') {
        return true;
    }
    else if (c == '-')
        return true;
    else if (c == '*')
        return true;
    else if (c == '/')
        return true;
    else
        return false;
            
}

double calculate(double x, double y, char c)
{
    if (c == '+')
        return x + y;
    else if (c == '-')
        return x - y;
    else if (c == '*')
        return x * y;
    else if (c == '/')
        return x / y;
    else
        return 0;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Enter a double value:";
    double x;
    std::cin >> x;
    std::cout << "Enter a second double value:";
    double y;
    std::cin >> y;
    std::cout << "Enter one of the following: +,-,*, or /:";
    char c;
    std::cin >> c;
    if (isOperator(c)) {
        std::cout << x << c << y << " is " << calculate(x, y, c);
    }
    return 0;
}
