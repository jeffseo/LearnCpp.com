1) What’s the difference between a function prototype and a forward declaration?  
  A **forward declaration** allows us to tell the compiler that a function exists before defining what the function does. This way, when the compiler encounters a call to the function, it’ll understand that we’re making a function call, and can check to ensure we’re calling the function correctly.  
To write a forward declaration for a function, we use a declaration statement called a **function prototype**. The function prototype consists of the function’s return type, name, parameters, but no function body (the part between the curly braces). And because the function prototype is a statement, it ends with a semicolon.  

2) Write the function prototype for this function:
```C++
int doMath(int first, int second, int third, int fourth)
{
     return first + second * third / fourth;
}
```
**A:** 
```C++
int doMath(int first, int second, int third, int fourth);
```
For each of the following programs, state whether they fail to compile, fail to link, or compile and link. If you are not sure, try compiling them!

3)
```C++
#include <iostream>
int add(int x, int y);
 
int main()
{
    using namespace std;
    cout << "3 + 4 + 5 = " << add(3, 4, 5) << endl;
    return 0;
}
 
int add(int x, int y)
{
    return x + y;
}
```
**A:** fail to compile as the function add() accepts 2 input parameters and the program attempts to input 3.  
4)
```C++
#include <iostream>
int add(int x, int y);
 
int main()
{
    using namespace std;
    cout << "3 + 4 + 5 = " << add(3, 4, 5) << endl;
    return 0;
}
 
int add(int x, int y, int z)
{
    return x + y + z;
}
```
**A:** Does not compile. The add() function declared in the function prototype differs from its actual implementation.   
5)
```C++
#include <iostream>
int add(int x, int y);
 
int main()
{
    using namespace std;
    cout << "3 + 4 + 5 = " << add(3, 4) << endl;
    return 0;
}
 
int add(int x, int y, int z)
{
    return x + y + z;
}
```
**A:** Does not link. Although the forward declared add() function matches with the add() called in the main for 2 inputs, such function was not implemented as the function implementation of add() involves 3 inputs.

6)
```C++
#include <iostream>
int add(int x, int y, int z);
 
int main()
{
    using namespace std;
    cout << "3 + 4 + 5 = " << add(3, 4, 5) << endl;
    return 0;
}
 
int add(int x, int y, int z)
{
    return x + y + z;
}
```
**A:** Compiles and links.

#LearnCpp Solutions  
1) A **function prototype** is declaration statement that tells the compiler what a function’s return type is, what the name of the function is, and what the types of the function parameters are. A function prototype can be used to forward declare a function. A **forward declaration** tells the compiler about the existence of a function (or other type of object) in advance of where it is implemented.  
2) 
```C++
// Either of these is correct.
// Do not forget the semicolon on the end, since these are statements.
int doMath(int first, int second, int third, int fourth); // better solution
int doMath(int, int, int, int);
```
3) Doesn’t compile. The compiler will complain that the add() called in main() does not have the same number of parameters as the one that was forward declared.  
4) Doesn’t compile. The compiler will complain that the add() called in main() does not have the same number of parameters as the one that was forward declared.  
5) Doesn’t link. The compiler will match the forward declared prototype of add to the function call to add() in main(). However, no add() function that takes two parameters was ever implemented (we only implemented one that took 3 parameters), so the linker will complain.  
6) Compiles and links. The function call to add() matches the prototype that was forward declared, the the implemented function also matches.
