# CPP03


## Description:

This module explores the concepts of inheritance and polymorphism in C++, focusing on creating derived classes, overriding base class functions, and utilizing dynamic polymorphism.
## Overview:

The module consists of three exercises:

## Exercise 00:
Implementing the ClapTrap base class.
## Exercise 01:
Implementing the derived class ScavTrap which inherits the constructors and destructors from ClapTrap.
## Exercise 02: 
Extends the hierarchy with the addition of a new class FragTrap which inherits from ClapTrap.
## Files Structure: 
. Each exercise is contained in its own directory (ex00, ex01, ex02).

. The class definitions are split into header files (ClapTrap.hpp, ScavTrap.hpp, & FragTrap.hpp) and their implementations are in separate source files (ClapTrap.cpp, ScavTrap.cpp, & FragTrap.cpp).

. The main.cpp file in each directory contains the test cases for the implemented functionality.
## Compilation and Execution:

1. Navigate to the Exercise Directory: Open a terminal and change to the directory of the exercise you want to run.
 ```bash
cd ex00  # Replace 'ex00' with the exercise directory you want to run
```
2. Compile the Code: Use the provided Makefile to compile the code.
 ```bash
make
```
3. Run the Executable: After successful compilation, run the generated executable.
```bash
./ClapTrap  # Replace 'ClapTrap' with the name of the executable for the exercise
```
4. Verify Output: Check the output in the terminal to verify the correctness of the program.
   
5. Clean Up (Optional): To clean up the compiled files, you can use the clean/fclean target in the Makefile.
 ```bash
make clean
```
or 
 ```bash
make fclean
```

## Exercise Specifics:

. Proper construction/destruction chaining between base and derived classes is demonstrated.

. Additional tests are included in the main.cpp files for each exercise.

## 🚀 Next Project

[CPP04](https://github.com/adhaka-afk/CPP04)

## ⏳ Previous Project

[CPP02](https://github.com/adhaka-afk/CPP02)


