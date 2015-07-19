1) What’s wrong with this program fragment?
```C++
void multiply(int x, int y)
{
    return x * y;
}
 
int main()
{
    cout << multiply(4, 5) << endl;
    return 0;
}
```
2) What’s wrong with this program fragment?
```C++
int multiply(int x, int y)
{
    int product = x * y;
}
 
int main()
{
    cout << multiply(4, 5) << endl;
    return 0;
}
```
3) What value does the following program print?
```C++
#include <iostream>
 
int add(int x, int y, int z)
{
    return x + y + z;
}
 
int multiply(int x, int y)
{
    return x * y;
}
 
int main()
{
    using namespace std;
    cout << multiply(add(1, 2, 3), 4) << endl;
    return 0;
}
```
4) Write a function called doubleNumber() that takes one integer parameter and returns twice the value passed in.

5) Write a complete program that reads an integer from the user (using cin, discussed in lesson 1.3a -- A first look at cout, cin, endl, namespaces, and using statements), doubles it using the doubleNumber() function you wrote for question 4, and then prints the doubled value out to the console.
