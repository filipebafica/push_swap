# push_swap
An integer sorting program 

## 🗂 Table of Contents
* [About](#-about)
* [Getting Started](#-getting-started)
* [How to Use](#-how-to-use)
* [42 École | 42 São Paulo](#-42-école--42-são-paulo)

## 🧐 About
This program sorts integers passed as argument using two stacks (a and b).\
Every used operation is displayed on the terminal.

Operations:

* sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
* sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
* pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
* pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
* ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
* rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.

This project is part of 42 École/ 42 SP curriculum.\
Topics such as data structures and sorting algorithms were addressed.

## 🏁 Getting Started
A Linux OS and the `gcc` compiler are needed.

#### ⚙️ Installing
To compile the code, clone the repo, and run the command `make`.
```
$ git clone https://github.com/filipebafica/push_swap.git
$ cd push_swap
$ make
```
This is going to generate an executable named `push_swap`.

## 🎈 How to Use
Just run the executable passing non-duplicate integers as the arguments.
```
$ ./push_swap 1 5 2 4 3
```

## 🏫 42 École | 42 São Paulo
42 École is a network of tech schools spread around the world where anyone can learn how to code for free.\
At 42 there are no teachers or classrooms, each student learns from and works with each other (peer-to-peer learning).\
To see more go to https://www.42.fr/ and https://www.42sp.org.br/.
