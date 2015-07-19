1) What does the following program print?
```C++
#include <iostream>
 
void doIt(int x)
{
    x = 3;
    int y = 4;
    std::cout << "doIt: x = " << x << " y = " << y << std::endl;
}
 
int main()
{
    int x = 1;
    int y = 2;
    std::cout << "main: x = " << x << " y = " << y << std::endl;
    doIt(x);
    std::cout << "main: x = " << x << " y = " << y << std::endl;
    return 0;
}
```

A:   
main: x = 1 y = 2  
doIt: x = 3 y = 4  
main: x = 1 y = 2

#LeanCpp solution
1.  
main: x = 1 y = 2  
doit: x = 3 y = 4  
main: x = 1 y = 2  
