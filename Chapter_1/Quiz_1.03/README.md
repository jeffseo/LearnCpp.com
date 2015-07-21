What values does this program print?
```C++
int x = 5;
x = x - 2;
std::cout << x << endl; // #1
 
int y = x;
std::cout << y << endl; // #2
 
// x + y is an r-value in this context, so evaluate their values
std::cout << x + y << endl; // #3
 
std::cout << x << endl; // #4
 
int z;
std::cout << z << endl; // #5
```

1. 3
2. 3
3. 6
4. 3
5. Garbage value

#LearnCpp solutions
1. The program outputs 3. x - 2 evaluates to 3, which was assigned to x.
2. The program outputs 3. y was assigned the value of x, which evaluated to 3.
3. The program outputs 6. x + y evaluates to 6. There was no assignment here.
4. The program outputs 3. The value of x is still 3 because it was never reassigned.
5. The output is indeterminate . z is an uninitialized variable.
