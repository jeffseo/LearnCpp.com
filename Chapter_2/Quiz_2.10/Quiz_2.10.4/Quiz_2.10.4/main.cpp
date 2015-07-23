//
//  main.cpp
//  Quiz_2.10.4
//
//  Created by Jeff Seo on 2015-07-23.
//  Copyright (c) 2015 Jeff Seo. All rights reserved.
//

#include <iostream>
#include "myConstants.h"

double calculateHeight(double height, double time)
{
    double currentHeight = height - (myConstants::gravity * (time*time))/2;
    if (currentHeight >= 0) {
        return currentHeight;
    }
    else
        return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Enter the initial height of the tower in meters:";
    double height;
    std::cin >> height;
    for (int i = 0; i <= 5; i++) {
        std::cout << "At " << i << " seconds, the ball is at height: " << calculateHeight(height, i) << " meters" << std::endl;
    }
    
    return 0;
}
