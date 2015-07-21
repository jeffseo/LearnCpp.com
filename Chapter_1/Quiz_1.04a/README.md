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
**A: The function return type is void**    

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
**A: Function does not return a value**  

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
**A: 24**  

4) Write a function called doubleNumber() that takes one integer parameter and returns twice the value passed in.  
```C++
int doubleNumber(int x){
    return x*x;
}
```

5) Write a complete program that reads an integer from the user (using cin, discussed in lesson 1.3a -- A first look at cout, cin, endl, namespaces, and using statements), doubles it using the doubleNumber() function you wrote for question 4, and then prints the doubled value out to the console.
```C++
#include <iostream>
int doubleNumber(int x){
    return x*x;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = 0;
    std::cout << "Please enter a number:";
    std::cin >> x;
    std::cout << doubleNumber(x);
    return 0;
}
```

#LearnCpp solutions
1. multiply() is defined as returning void, which means it can’t return a value. Since the function is trying to return a value, this function will produce a compiler error. The function should return an int.
2. multiply() calculates a value and puts the result in a variable, but never returns the value to the caller. Because there is no return statement, and the function is supposed to return an int, this will produce a compiler error.
3. multiply is called where x = add(1, 2, 3), and y = 4. First, the CPU resolves x = add(1, 2, 3), which returns 1 + 2 + 3, or x = 6. multiply(6, 4) = 24, which is the answer.
4.  
```C++
int doubleNumber(int x)
{
    return 2 * x;
}
```
5.
```C++
#include <iostream>
 
int doubleNumber(int x)
{
    return 2 * x;
}
 
int main()
{
    using namespace std;
    int x;
    cin >> x;
    cout << doubleNumber(x) << endl;
    return 0;
}
 
// The following is an alternate way of doing main:
int main()
{
    using namespace std;
    int x;
    cin >> x;
    x = doubleNumber(x);
    cout << x << endl;
    return 0;
}
```

