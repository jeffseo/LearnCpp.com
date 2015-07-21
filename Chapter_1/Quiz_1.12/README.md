#Chapter 1 comprehensive quiz
**Question 1**

Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:

A function named “readNumber” should be used to get (and return) a single integer from the user.
A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
A main() function should be used to glue the above functions together.
Hint: You do not need to write a separate function to do the adding (just use operator+ directly).
Hint: You will need to call readNumber() twice.
Hint: If you’re using visual studio with precompiled headers, don’t forget to #include “stdafx.h”.

```C++
//main.cpp
#include <iostream>

int readNumber();
void writeAnswer(int x);

int main(int argc, const char * argv[]) {
    std::cout << "Quiz 1.12!\n";
    //int x = readNumber();
    //int y = readNumber();
    writeAnswer(readNumber()+readNumber());
    return 0;
}

int readNumber()
{
    int number;
    std::cout << "Enter the first integer: ";
    std::cin >> number;
    return number;
}

void writeAnswer(int x)
{
    std::cout << "The sum of inputs: " << x;
}
```
**Question 2**

Modify the program you wrote in exercise #1 so that readNumber and writeAnswer() live in a separate file called “io.cpp”. Use a forward declaration to access them from main().

Hint: If you’re having problems, make sure io.cpp is properly added to your project so it gets compiled (see lession 1.8 -- programs with multiple files for more information on how to do this).
```C++
//main.cpp
#include <iostream>

int readNumber();
void writeAnswer(int x);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Quiz 1.12!\n";
    //int x = readNumber();
    //int y = readNumber();
    writeAnswer(readNumber()+readNumber());
    return 0;
}

```
```C++
//io.cpp
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
    std::cout << "The sum of inputs: " << x;
}
```
**Question 3**

Modify the program you wrote in #2 so that it uses a header file (named io.h) to access the functions instead of forward declarations. Make sure your header file uses header guards.
```C++
//main.cpp
#include <iostream>
#include "io.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Quiz 1.12!\n";
    //int x = readNumber();
    //int y = readNumber();
    writeAnswer(readNumber()+readNumber());
    return 0;
}
```
```C++
//io.cpp
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
    std::cout << "The sum of inputs: " << x;
}
```
```C++
//io.h
#ifndef Quiz_1_12_io_h
#define Quiz_1_12_io_h

int readNumber();
void writeAnswer(int x);

#endif
```
