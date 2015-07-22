1) Convert the following numbers to C++ style scientific notation (using an e to represent the exponent) and determine how many significant digits each has:  
a) 34.50  
**A:** 3.450e1 (4 Significant digits)  
b) 0.004000  
**A:** 4.000e-3 (4 significant digits)  
c) 123.005  
**A:** 1.23005e2 (6 significant digits)  
d) 146000  
**A:** 1.46e5 (3 significant digits)
e) 146000.001  
**A:** 1.46000001e5 (8 significant digits)  
f) 0.0000000008  
**A:** 8e-10 (1 significant digit)  
g) 34500.0  
**A:** 3.45000e4 (6 significant digits)  

#LearnCpp Solutions
a) 3.450e1 (4 significant digits)  
b) 4.000e-3 (4 significant digits)  
c) 1.23005e2 (6 significant digits)  
d) 1.46e5 (3 significant digits)  
e) 1.46000001e5 (9 significant digits)  
And now a couple of trickier ones:  

f) 8e-10 (1 significant digit)  

The correct significand is 8, not 8.0. 8.0 has two significant digits, but this number only has 1.  

g) 3.45000e4 (6 significant digits)  

We don’t trim the trailing zeros here because the number does have a decimal point. Even though the decimal point doesn’t affect the value of the number, it affects the precision, so it needs to be included in the significand. If the number had been specified as 34500, then the answer would have been 3.45e4.
