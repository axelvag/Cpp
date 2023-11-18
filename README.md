# Cpp Project 00 -> 09

## In general

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes" (source: [Wikipedia](https://en.wikipedia.org/wiki/C++)).<br><br>
This project was my first contact to write programms in C++.<br>
All of those exercises are compilable with the `-std=c++98`-flag, since this was a requirement for this project.<br>

## Installation

Use `git clone` for clone the repo.
Enter in the file of your choice `cd Module_0.../`.
Then enter in a exercice `cd ex0.../`.
And `make` the project.
Finaly, use `./Name_of_the_executable` for throw the code.

### --------------------------------------PROJECT 00--------------------------------------

## Exercise 00

The Goal of this exercise was to write a really simple c++ style programm, but without any classes yet, just to get familiar with the use of i.e. `std::cout`.
You enter a string and it return this string but in capital letter !

You can compile this project with `make` or `make re`.<br>
Then use it with `./megaphone "Argument_you_want_to_change_to_all_CAPS"`


## Exercise 01

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
- [Summary](#summary)

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
