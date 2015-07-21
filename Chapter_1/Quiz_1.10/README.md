1) Using the mymath.h example above, add header guards to files add.h and subtract.h.
  mymath.h
```C++
#ifndef MYMATH_H
#define MYMATH_H
 
// note: This function really should be defined in mymath.cpp, but we're doing it here for the sake of example
int cardsInDeck()
{
    return 52;
}
 
#endif
```

  add.h
```C++
#ifndef ADD_H
#define ADD_H
 
#include "mymath.h"
int add(int x, int y);
 
#endif
```

  subtract.h
```C++
#ifndef SUBTRACT_H
#define SUBTRACT_H
 
#include "mymath.h"
int subtract(int x, int y);
 
#endif
```
