//
//  main.cpp
//  Hello World
//
//  Created by Jeff Seo on 2015-07-19.
//  Copyright (c) 2015 Jeff Seo. All rights reserved.
//

#include <iostream>
#include "add.h"

int doubleNumber(int x){
    return x*x;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = 0;
    //std::cout << "Hello, World!\n";
    std::cout << "Please enter a number:";
    std::cin >> x;
    std::cout << "You entered " << x << std::endl;
    std::cout << doubleNumber(x);
    std::cout << add(x,x);
    return 0;
}
