**Machine language**: limited set of instructions that a CPU natively understands. (Also referred to as Machine code/Instruction set) 
eg. Binary code      

**Because machine language is hard to program with, assembly language and High-level languages such as C/C++ are used instead.** Issues with assembly language is that one assembly program written for one CPU will not run on another CPU and assembly languages require a lot of instructions to do even simple tasks, and are not very readable.      

**On the other hand, high-level languages allow programmers to write programs without being concerned about what kind of computer the program is being run on**. Programs written in high level are translated into a form which the CPU can understand before execution. Two main methods include:
  1. **Compiler:** a program that reads code and produces a stand-alone executable program that the CPU can understand directly.
  2. **Interpreter:** a program that directly executes your code without compiling it into machine code first. Generally scripting languages use interpreters.    

Main difference between C and C++ is that C++ is an **object-oriented language**.    

C/C++ both have the design philosophy of "**trust the programmer**" which implies that the compiler will not stand in your way if you try to do something unorthodox that makes sense, but also dangerous.    

**Simplistic approach to development:**  
  Step 1: Define the problem to be solved  
  Step 2: Design a solution  
  Step 3: Write a program that implements the solution  
  Step 4: Compile the program  
  Step 5: Link object files  
  Step 6: Test and debug the program    

**IDE to use:**  
Windows: Microsoft Visual Studios  
OS X: Xcode  

Project type for the LearnCPP will be **console projects** (projects that can be run from DOS or linux command-line and by default have no graphical user interface plus compiled into stand-alone executable files)  

IDE's create a **workspace (or solutions)** for a project which is a container that can hold one or more related projects. However, it is recommended to create new workspaces for each program to make it simpler as well as reduce chances of error.

**Build configurations:**
  1. Debug configuration: Designed to help debug the program and used in development. Turns off all optimizations and includes debugging information. 
  2. Release configuration: Designed to be used when releasing the program to the public. This optimizes the program in terms of size and performance and does not contain debugging information.
