## C++ Pool - day07

#### Templates

**Contents**

- Exercise 00: A few functions
- Exercise 01: Iter
- Exercise 02: Array

#### Exercise 00: A few functions
- Turn-in directory : ex 00 /
- Files to turn in : whatever.hpp, main.cpp and a Makefile

Write the following function templates:
- swap: Swaps the values of two arguments. Does not return anything.
- min: Compares the two arguments and returns the smallest one. If the two arguments are equal, then it returns the second one.
- max: Compares the two arguments and returns the biggest one. If the two arguments are equal, then it returns the second one.

Templates must be defined in header files. You must turn in a main.cpp containing tests for your program. This file can and will be changed during evaluation. These functions can be called with any type of argument, with the condition that the two arguments have the same type and supports all comparison operators. Provide enough code to compile an executable that proves that everything works as intended.

The following code:
```
int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}
```
Should output the following if you did well:
```
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine
min(c, d) = chaine
max(c, d) = chaine
````

#### Exercise 01: Iter
- Turn-in directory : ex 01 /
- Files to turn in : iter.hpp, main.cpp and a Makefile

Write a function template iter that take 3 parameters and returns nothing. The first parameter is the address of an array, the second one is the length of the array and the third one is a function called for each element of the array.

Wrap your work in an executable that proves that your function template iter works with any type of array and/or with an instantiated function template as a third parameter.

#### Exercise 02: Array
- Turn-in directory : ex 02 /
- Files to turn in : Array.hpp, main.cpp and a Makefile

Write a class template Array that contains elements of type T and that allows the following behavior:
- Construction with no parameter: creates an empty array.
- Construction with an unsigned int n as a parameter: creates an array of n elements, initialized by default. (Tip: try to compile int * a = new int();, then display*a.)
- Construction by copy and assignment operator. In both cases, modifying one of the two arrays after copy/assignment won’t affect anything in the other array.
- You MUST use the operator new[] for your allocation. You must not do preventive allocation. Your code must never access non allocated memory.
- Elements are accessible through the operator[].
- When accessing an element with the operator[], if this element is out of the limits, a std::exception is thrown.
- A member function size that returns the number of elements in the array. This member function takes no parameter and does not modify the current instance in any way.

Wrap your work into an executable that proves that your class template works as intended.