# Cpp Project 00 -> 09

## In general

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes" (source: [Wikipedia](https://en.wikipedia.org/wiki/C++)).<br><br>
This project was my first contact to write programms in C++.<br>
All of those exercises are compilable with the `-std=c++98`-flag, since this was a requirement for this project.<br>

## Installation

Use `git clone` for clone the repo. <br>
Enter in the file of your choice `cd Module_0.../`. <br>
Then enter in a exercice `cd ex0.../`. <br>
And `make` the project. <br>
Finaly, use `./Name_of_the_executable` for throw the code. <br>

### Table of Contents ALL PROJECT

- [Project 00](#--------------------------------------PROJECT-00--------------------------------------)
- [Project 01](#--------------------------------------PROJECT-01--------------------------------------)
- [Project 02](#--------------------------------------PROJECT-02--------------------------------------)
- [Project 03](#--------------------------------------PROJECT-03--------------------------------------)
- [Project 04](#--------------------------------------PROJECT-04--------------------------------------)
- [Project 05](#--------------------------------------PROJECT-05--------------------------------------)
- [Project 06](#--------------------------------------PROJECT-06--------------------------------------)
- [Project 07](#--------------------------------------PROJECT-07--------------------------------------)
- [Project 08](#--------------------------------------PROJECT-08--------------------------------------)
- [Project 09](#--------------------------------------PROJECT-09--------------------------------------)

### --------------------------------------PROJECT 00--------------------------------------

### Table of Contents

- [ex00. Megaphone](#Exercise-00---Megaphone)

- [ex01. Phonebook](#Exercise-01---Phonebook)

- [Installation](#installation)

## Exercise 00 - Megaphone

The Goal of this exercise was to write a really simple c++ style programm, but without any classes yet, just to get familiar with the use of i.e. `std::cout`.
You enter a string and it return this string but in capital letter !

You can compile this project with `make` or `make re`.<br>
Then use it with `./megaphone "Argument_you_want_to_change_to_all_CAPS"`


## Exercise 01 - Phonebook

This subject was a little more sophisticated than the one before.<br>
First time using classes.<br>


This programm resembles a phonebook, where you can store up to 8 contacts, and display the stored information during runtime.<br>
When the programm is terminated in any way, all contacts are lost.<br>
The phonebook also has instructions and descriptive error messages that tell you what to do and how to use it correctly.


Usage:

You can compile this project with `make`, `make all` or `make re`.<br>
Then you can run it with `./phonebook`.<br>
After that, just follow the instructions of the phonebook.<br>


### --------------------------------------PROJECT 01--------------------------------------

*BraiiiiiiinnnzzzZ 🧠*

### Table of Contents

- [Introduction](#introduction)
- [ex00. BraiiiiiiinnnzzzZ](#ex00-braiiiiiiinnnzzzz)
	* [Example](#example)
- [ex01. Moar brainz!](#ex01-moar-brainz)
	* [Example](#example-1)
- [ex02. HI THIS IS BRAIN](#ex02-hi-this-is-brain)
	* [Example](#example-2)
- [ex03. Unnecessary violence](#ex03-unnecessary-violence)
	* [Example](#example-3)
- [ex04. Sed is for losers](#ex04-sed-is-for-losers)
	* [Example](#example-4)
- [ex05. Karen 2.0](#ex05-karen-20)
	* [Example](#example-5)
- [ex06. Karen-filter](#ex06-karen-filter)
	* [Example](#example-6)
- [Installation](#installation)

## Introduction

This second set of exercises is a bit more interesting. We'll be learning the basics of memory allocation in C++, references, pointers, and a rough look at switches.

## ex00. BraiiiiiiinnnzzzZ

This first exercise asks us to simply create a bunch of classes with basic methods we will use in future exercises in the module. We must have two ways of allocating instances of the class: either on the stack or on the heap, and free the allocated space at the right time.

### Example

This is an example output given my main.

<div align="center">
    <img src="https://user-images.githubusercontent.com/40824677/189330417-5b804e3f-5590-4b35-8a6a-a8f53e410bb6.png">
    <img src="https://user-images.githubusercontent.com/40824677/189330643-ee7426d5-b49c-430f-a951-68b6e7969286.png">
</div>

## ex01. Moar brainz!

This second exercise consists of creating a method that will summon **N** zombies in one go, without naming each one of them. Then they all announce themselves and are properly destroyed.

### Example

<div align="center">
    <img src="https://user-images.githubusercontent.com/40824677/189332763-1d2836a5-2300-49a0-bdb0-57dbe5d9a3bd.png">
</div>

## ex02. HI THIS IS BRAIN

This next exercise is super simple, it only aims to differentiate between pointers and references

### Example

<div align="center">
    <img src="https://user-images.githubusercontent.com/40824677/189333500-6110f4ce-dbb5-4d0f-9729-49a13d47557d.png">
</div>

## ex03. Unnecessary violence

This one extends the concepts of references and pointers from the previous exercise, creating two types of humans in two classes that can attack each other with different weapons.

### Example

<div align="center">
    <img src="https://user-images.githubusercontent.com/40824677/189334239-fa95bba9-eaa3-41db-b834-8decbd2a3a89.png">
    <img src="https://user-images.githubusercontent.com/40824677/189334016-a97f57c5-9bdb-40a0-a076-37d5a16a1eda.png">
</div>

## ex04. Sed is for losers

This exercise aims to replicate the basic performance of the **sed** command (**s**tream **ed**itor), receiving a file and a string to replace with another. It saves the output to a file with the same name ending in *.replace*. This exercise helps us understand file streams and strings in C++.

### Example

<div align="center">
    <img src="https://user-images.githubusercontent.com/40824677/189335320-92e905bb-e978-4b8d-859e-d87558ec481f.png">
</div>

Note: the example above shows how the replace operation is reversible (unsurprisingly).

## ex05. Karen-Harl 2.0

The next two exercises expand on the idea of refernces a bit further. We create a **Karen/Harl** class that can give various messages of types **DEBUG**, **INFO**, **WARNING** and **ERROR**. We are asked to create that outputs the proper message depending message type.

### Example

<div align="center">
    <img src="https://user-images.githubusercontent.com/40824677/189336182-7321ad3f-8c24-40ad-8a80-de48ab11da1e.png">
    <img src="https://user-images.githubusercontent.com/40824677/189335932-cc2a47f6-d0b1-4030-93ca-e714a4a2d6ab.png">
</div>

You can compile this project with `make` or `make re`.<br>
Then use it with `./Harl`

## ex06. Karen-Harl-filter

This last exercise is an extension of the previous one. However this time we receive the message type from the user and output that type's message and all the message types above it (order is **DEBUG** < **INFO** < **WARNING** < **ERROR**). We must coordinate the responses using switches for this exercise.
So you need to use a "switch" for two reason, first to don't use a forest of (if, else if, else) and second for execute all function below the good one !

### Example

<div align="center">
    <img src="https://user-images.githubusercontent.com/40824677/189337035-d77110f1-0bc6-4071-bb6c-249054d99982.png">
</div>

Note how the **DEBUG** message is not shown because it is below **INFO**.

You can compile this project with `make` or `make re`.<br>
Then use it with `./Harl "Argument_you_want_between_INFO_DEBUG_ERROR_WARNING"`


### --------------------------------------PROJECT 02--------------------------------------

## Ex00 - Fixed Class
Because floating point types lack accuracy and can be slow, we must implement a new class for Fixed point numbers. This exercise is an introduction to the Orthodox Canonical form, in which a class should have a default constructor, a copy constructor, a destructor and an assignment operator overload.

```
./fixed
```

The output shows the sequence of calls to constructors, destructors, assignment operators and getters.

## Ex01 - A More Useful Fixed Class
This exercise builds on the previous one. Now we must add an output stream overload to the class, as well as new constructors from int and float and member functions able to translate a Fixed number into an integer or a float.

```
./fixed
```

## Ex02 - Overload Madness
The third exercise, again, builds on the previous one. Now we must implement overloads for all operators (comparison < > <= >= == !=, binary + - * /, unary prefix++ ++postfix prefix-- postfix--) as well as regular and const versions of functions that return the largest or smallest of two fixed numbers.

```
./fixed
```


### --------------------------------------PROJECT 03--------------------------------------

## Ex00 - ClapTrap
In the first exercise, we must implement a simple class, ClapTrap, which has the ability to attack, take damage and be repaired. The class also has private attributes: a name, hit points, energy points and attack damage.

```
./trap
```
The output shows the results of a functionality test.

## Ex01 - ScavTrap
The second exercise builds on the first by implementing another class, ScavTrap, which inherits from the previously created ClapTrap class and implements some new functionality, guardGate. ScavTrap also has different default values in its hit points, energy points and attack damage attributes.

```
./trap
```

## Ex02 - FragTrap
The third exercise introduces yet another class, FragTrap, which also inherits from the ClapTrap class and also has its own functionality, highFivesGuys. FragTrap also has different default values in its hit points, energy points and attack damage attributes compared to both ClapTrap and ScavTrap.

```
./trap
```

### --------------------------------------PROJECT 04--------------------------------------

## Ex00 - Animals
In the first exercise, we must implement a simple class, Animal, and its two derived classes, Dog and Cat. All classes have their own makeSound function which displays a different message depending on the animal. We must manipulate cats and dogs through pointers of their parent class, Animal, and ensure that the sounds they make are appropriate to their type. 

### Usage
Clone this repository and `cd` into `cpp04/ex00`. Then `make` to compile. Run the program with:

```
./animal
```
The output shows the results of a functionality test.

## Ex01 - Animals with brains
The second exercise builds on the first by implementing another class, Brain. Cat and Dog instances will have a Brain which can contain up to 100 ideas. Copies of Dogs and Cats musn't be shallow, and there should be no memory leaks. 

### Usage
Clone this repository and `cd` into `cpp04/ex01`. Then `make` to compile. Run the program with:

```
./animal
```

## Ex02 - Abstract animals
The third exercise introduces us to the concept of abstract classes. The Animal base class should no longer be instantiable.

### Usage
Clone this repository and `cd` into `cpp04/ex02`. Then `make` to compile. Run the program with:

```
./animal
```
To check that the Animal class is no longer instantiable, uncomment the commented test in `cpp04/ex02/sources/main.c`. The program should no longer compile.

## Ex03 - Materias
The fourth and last exercise in the series requires the implementation of pure abstract classes: interfaces. The Character class is implemented according to the ICharacter interface. A character has an inventory of up to 4 materia which can be equipped, unequipped or used. A materia can be one of two types: ice or cure. Materias are created with a MateriaSource class which implements the IMateriaSource interface.

### Usage
Clone this repository and `cd` into `cpp04/ex03`. Then `make` to compile. Run the program with:

```
./materia
```

### --------------------------------------PROJECT 05--------------------------------------

## Ex00 - Bureaucrats
In the first exercise, we must implement a simple class, Bureaucrat. The Bureaucrat's highest possible grade is 1 and its lowest is 150. Attempting to construct a Bureaucrat with a grade that is either too high or too low should throw the appropriate exception. The same is true when a Bureaucrat's grade increases or decreases.

### Usage
Clone this repository and `cd` into `cpp05/ex00`. Then `make` to compile. Run the program with:

```
./bureaucrat
```
The output shows the results of a functionality test.

## Ex01 - Forms
The second exercise builds on the first by implementing another class, Form. Forms start off unsigned and require a certain grade to be signed and to be executed. If a form grade is out of bounds, the appropriate exception must be thrown.

### Usage
Clone this repository and `cd` into `cpp05/ex01`. Then `make` to compile. Run the program with:

```
./bureaucrat
```

## Ex02 - More Forms!
The third exercise asks us to extend the variety of our forms. The Form class becomes abstract, and three specific forms will inherit from it: the Shrubbery Creation Form, the Robotomy Request Form, and the Presidential Pardon Form. Each have different grades required to sign and execute them, as well as their own effects. 

### Usage
Clone this repository and `cd` into `cpp05/ex02`. Then `make` to compile. Run the program with:

```
./bureaucrat
```

## Ex03 - Interns
The fourth and last exercise in the series builds on the previous ones. A new class, Intern, although it has no grade and no unique characteristics, has the ability to create each of the previously-defined forms. Of course, exceptions will be thrown if the requested form cannot be created.

### Usage
Clone this repository and `cd` into `cpp05/ex03`. Then `make` to compile. Run the program with:

```
./bureaucrat
```

### --------------------------------------PROJECT 06--------------------------------------

## Ex00 - Scalar Type Conversion
In the first exercise, we must create a program able to static cast a given literal from one scalar type (char, int, float or double) to each of the 3 others.

### Usage
Clone this repository and `cd` into `cpp06/ex00`. Then `make` to compile. Run the program with:

```
./convert_scalar <char>
./convert_scalar <int>
./convert_scalar <float>f
./convert_scalar <double>
./convert_scalar <inf, inff, -inf, -inff, or nan>
```
The output shows the results of the conversion to each of the types. (Note that floats and double must both contain a floating point, and floats must be indicated with a trailling 'f').

## Ex01 - Serialization
In the second exercise, we must create a simple program able to serialize and deserialize a pointer to a class instance thanks to a reinsterpret cast.

### Usage
Clone this repository and `cd` into `cpp06/ex01`. Then `make` to compile. Run the program with:

```
./serializer
```

## Ex02 - Identify
The third exercise asks us to create a program which randomly instantiates one of three derived classes as their parent base class pointer. Then, the program must be able to identify which of the three derived classes the pointer points to, using dynamic casting. It must also be able to identify the class by reference instead of by pointer.

### Usage
Clone this repository and `cd` into `cpp06/ex02`. Then `make` to compile. Run the program with:

```
./identifier
```

### --------------------------------------PROJECT 07--------------------------------------

## Ex00 - Swap, Min & Max
In the first exercise, we must create simple template functions. These are swap, which swaps the values of two given arguments, min which returns the smallest of two arguments, and max which does the opposite. These functions can be called with any type of argument, be it an int, a float, a char, a string, etc.

### Usage
Clone this repository and `cd` into `cpp07/ex00`. Then `make` to compile. Run the program with:

```
./whatever
```
The output shows the results of functionality tests.

## Ex01 - Iter
For the second exercise, we must implement a function template able to call a function on every element of an array. The array can be of any type.

### Usage
Clone this repository and `cd` into `cpp07/ex01`. Then `make` to compile. Run the program with:

```
./iter
```

## Ex02 - Array
For the third exercise, we must implement a class template Array, which contains elements of type T. Memory must be allocated and a subscript operator [] must be defined to access array elements. Of course, this class should work with any variable type (int, char, string, float, etc.)

### Usage
Clone this repository and `cd` into `cpp07/ex02`. Then `make` to compile. Run the program with:

```
./array_template
```

### --------------------------------------PROJECT 08--------------------------------------

## Ex00 - Easyfind
In the first exercise, we must create a simple template function, easyfind, which finds the first occurence of an integer in a container, whether it be a vector, a deque, a list...

### Usage
Clone this repository and `cd` into `cpp08/ex00`. Then `make` to compile. Run the program with:

```
./easyfind
```
The output shows the results of functionality tests.

## Ex01 - Span
In the second exercise, we must implement a Span class that can store integers. Using iterators and algorithm functions, it must be able to add a number or a range of numbers to its container. It must also be able to calculate the shortest and the longest span within the numbers it stores.

### Usage
Clone this repository and `cd` into `cpp08/ex01`. Then `make` to compile. Run the program with:

```
./span
```

## Ex02 - MutantStack
The third exercise requires us to create a new container called MutantStack, which adds iterator functionality to the standard `std::stack` container.

### Usage
Clone this repository and `cd` into `cpp08/ex02`. Then `make` to compile. Run the program with:

```
./mutantStack
```

### --------------------------------------PROJECT 09--------------------------------------

## Ex00 - Bitcoin Exchange
In the first exercise, we are provided with a CSV file containing a historical list of exchange rates for bitcoin. An input file contains a list of dates paried with a number of bitcoin, and for each, we must output the total value of the bitcoins at that date, based on the historical data. In this exercise, I chose to use an `std::map` to pair dates converted to Epoch `time_t` and values.

### Usage
Clone this repository and `cd` into `cpp09/ex00`. Then `make` to compile. Run the program with:

```
./btc <input.txt>
```

The output shows the resulting bitcoin values for each line in the input file.

## Ex01 - RPN
In the second exercise, we must implement a Reverse Polish Notation calculator. Because Reverse Polish Notation was designed for use with stacks, an `std::stack` was the obvious choice. An RPN calculation looks like this: `2 3 +`. Each operand (2 and 3 in the example) is pushed to a stack. When we encounter an operator (here, +), the last two operands are popped from the stack, the operation is performed, and the result is pushed back onto the stack.

### Usage
Clone this repository and `cd` into `cpp09/ex02`. Then `make` to compile. Run the program with:

```
./RPN <Reverse_Polish_Notation_expression>
```

Spaces do not matter in the RPN expression, each digit is treated as a separate number. The two following notations are equivalent:

```
./RPN "2 3 + 1 -"
./RPN 23+1-
```

The ouput shows the result of the operation.

## Ex02 - PmergeMe

The third exercise requires us to implement a Ford-Johnson merge-insertion sort algorithm using two distinct containers to compare the time it takes each to perform the same task. I chose the classic `std::vector` vs `std::list` for this.

### Usage

Clone this repository and `cd` into `cpp09/ex02`. Then `make` to compile. Run the program with:

```
./PmergeMe <numbers_to_sort>
./PmergeMe 9 3 1 15 6 30 8 7 11
```

To test with a randomly generated set of 3000 numbers:

```
./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
```

The output displays the numbers sorted with a vector and a list, as well as the number of clock cycles each sort took to complete.
