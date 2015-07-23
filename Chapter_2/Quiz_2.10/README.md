#2.10 — Chapter 2 comprehensive quiz
>Note: When using symbolic constants to replace magic numbers, try to use *const* instead of #define  

**Question 1**

Why are symbolic constants usually a better choice than literal constants? Why are const symbolic constants usually a better choice than #defined symbolic constants?  


**A:** Symbolic constants can display what the numbers actually represent rather than being a literal constant where all you know about a value is that it is a value being assigned. Const symbolic constants are usually a better choice than #defined symbolic constants as in the debugging process, #define constants do not show up in the debugger and show up as literals and therefore may cause the user some difficulties.  


**Question 2**

Pick the appropriate data type for a variable in each of the following situations. Be as specific as possible. If the answer is an integer, pick a specific integer type (e.g. int16_t) based on range. If the variable should be unsigned or const, say so. Favor signed numbers over unsigned numbers.

a) The age of the user (in years)  
b) Whether the user wants color or not  
c) pi (3.14159265)  
d) The number of pages in a textbook  
e) The price of a stock in dollars (to 2 decimal places)  
f) How many times you’ve blinked since you were born (note: answer is in the millions)  
g) A user selecting an option from a menu by letter  
h) The year someone was born  

**A:**  
a) Integer (uint8_t)  
b) Boolean  
c) Double  
d) Integer (uint16_t)  
e) Float  
f) Integer (uint64_t)  
g) Char  
h) Integer (uint8_t)  

**Question 3**

Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 7  
Enter a second double value: 5  
Enter one of the following: +, -, *, or /: *  
7 * 5 is 35  
Hint: You can check if the user has entered a plus symbol using an if statement, covered in section 2.6 -- Boolean values.

**Question 4**

This one is a little more challenging. Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the initial height of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity. Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

Your program should include a header file named constants.h that includes a namespace called myConstants. In the myConstants namespace, define a symbolic constant to hold the value of gravity (9.8 meters per second). See section 2.9 -- Symbolic constants and the const keyword for a reminder on how to do this.

Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds^2 / 2

Sample output:

Enter the initial height of the tower in meters: 100  
At 0 seconds, the ball is at height: 100 meters  
At 1 seconds, the ball is at height: 95.1 meters  
At 2 seconds, the ball is at height: 80.4 meters  
At 3 seconds, the ball is at height: 55.9 meters  
At 4 seconds, the ball is at height: 21.6 meters  
At 5 seconds, the ball is at height: 0 meters  

#LearnCpp Solutions
1) Using literal constants (aka. magic numbers) in your program makes your program harder to understand and harder to modify. Symbolic constants help document what the numbers actually represent, and changing a symbolic constant at it’s declaration changes the value everywhere it is used. #define constants do not show up in the debugger and are more likely to have naming conflicts.  

2)   
a) int8_t wouldn’t be able to hold anybody who lived to be older than 127. Although that’s not likely, it’s possible (or will probably be in the future). So int16_t is probably the best choice.  
b) bool  
c) const double  
d) Since books can often have more than 255 pages but probably never have more than 32,767 pages, int16t is a good choice   here.
e) float  
f) int32_t  
g) char  
h) int16_t. You can use positive numbers to represent AD birthdates, and negative numbers to represent BC birthdates.  

3)  
```C++
#include <iostream>
 
int main()
{
    using namespace std;
    cout << "Enter a double value: ";
    double dX;
    cin >> dX;
 
    cout << "Enter a second double value: ";
    double dY;
    cin >> dY;
 
    cout << "Enter one of the following: +, -, *, or / ";
    char chChoice;
    cin >> chChoice;
 
    if (chChoice == '+')
        cout << dX << " + " << dY << " is " << dX + dY << endl;
    else if (chChoice == '-')
        cout << dX << " - " << dY << " is " << dX - dY << endl;
    else if (chChoice == '*')
        cout << dX << " * " << dY << " is " << dX * dY << endl;
    else if (chChoice == '/')
        cout << dX << " / " << dY << " is " << dX / dY << endl;
 
    return 0;
}
```
  
4)  
Constants.h:  
```C++
#ifndef CONSTANTS_H
#define CONSTANTS_H
 
namespace myConstants
{
    const double gravity(9.8); // in meters/second squared
}
#endif
```
  
Main:  
```C++
#include <iostream>
#include "constants.h"
 
double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen = myConstants::gravity * seconds * seconds / 2;
    double heightNow = initialHeight - distanceFallen;
 
    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}
 
void calculateAndPrintHeight(double initialHeight, int time)
{
    std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << "\n";
}
int main()
{
    using namespace std;
    cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    cin >> initialHeight;
	
    calculateAndPrintHeight(initialHeight, 0);
    calculateAndPrintHeight(initialHeight, 1);
    calculateAndPrintHeight(initialHeight, 2);
    calculateAndPrintHeight(initialHeight, 3);
    calculateAndPrintHeight(initialHeight, 4);
    calculateAndPrintHeight(initialHeight, 5);
	
    return 0;
}
```
