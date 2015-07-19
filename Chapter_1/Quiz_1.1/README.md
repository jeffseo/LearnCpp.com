1. **What is the difference between a statement and an expression?**  
An **expression** is a mathematical entity that evaluates to a value. E.g. 2+3 evaluations to 5.  
A **statement** is written to convey to the compiler that we want to perform a task. Most common simple statements consist of:
  1. Declaration statement: tells the compiler that x is a variable e.g. int x;
  2. Assignment statement: assigns a value to a variable e.g. x = 5;
  3. Output statement: outputs the value to the screen e.g. std::cout << x;      

  E.g. x = 2 + 3; is a valid assignment statement where the 2+3 is an expression and the value 5 is assigned to x.

2. **What is the difference between a function and a library?**  
A **function** is a collection of statements that executes sequentially. Every C++ program must contain a special function called main.  
A **library** is a collection of precompiled code (e.g. functions) that has been "packaged up" for reuse in many different programs. They provide a common way to extend what programs can do e.g. the C++ standard library which the iostream library is a part of.
3. **What symbol do statements in C++ end with?**  
Statements in C++ are terminated by a **semicolon**. (;)

4. **What is a syntax error?**  
Rules that govern how sentences are constructed in a language is called **syntax**. In C++, syntax defines the rules about how the programs must be constructed in order to be considered valid. Any violation of such rules will result in a **syntax error**.

#Answers from LearnCpp:
1. A statement is a “complete sentence” that tells the compiler to perform a particular task. An expression is a mathematical entity that evaluates to a value. Expressions are often used inside of statements.
2. A function is a collection of statements that executes sequentially, typically designed to perform a specific job. A library is a collection of functions packaged for use in multiple programs.
3. The semicolon (;)
4. A syntax error is a compiler error that occurs at compile-time when your program violates the grammar rules of the C++ language.
