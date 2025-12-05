Project 7 — Fundamentals of Computing  
Author: Isaac Odoom Amanor  
Semester: Fall 2025

OVERVIEW

In this project, we implement Tasks 1–5 from the assignment using C++. All of the code is contained in a single file named `main.cpp`. We label each task clearly in the program using headings such as “// TASK 1 — CONDITIONAL STATEMENTS,” and we include an end-of-line comment for every line of code to explain its purpose. Through this project, we demonstrate our understanding of conditional statements, loops, functions, vectors, and number-theoretic computations in C++.

HOW TO COMPILE AND RUN

To compile and run the program, we first open the Command Prompt and navigate to the directory containing `main.cpp`. For example:

cd "C:\Users\amano\OneDrive\Desktop\FALL 2025\FUNDAMENTALS OF COMPUTING\isaac_amanor_project_7"

We then compile the program using:

g++ main.cpp -o project7

After compilation, we run the program with:

project7

The program will first prompt us to enter a number for Task 1. After that, it automatically performs the remaining tasks in order.

DESCRIPTION OF TASKS

• TASK 1 — Conditional Statements  
  We use a switch statement to print either “negative one,” “zero,” “positive one,” or “other value,” depending on the user’s input.

• TASK 2 — Vector Printing Helper  
  We implement a `print_vector` function that prints all the elements of a vector on one line. We use this helper function in the factorization tasks.

• TASK 3 — Fibonacci Sequence Using a While Loop  
  We compute and print all Fibonacci numbers that are less than or equal to 4,000,000.

• TASK 4.1 — Prime Check (`isprime`)  
  We write a function that determines whether a given integer is prime and test it on several inputs.

• TASK 4.2 — Factorization (`factorize`)  
  We compute and print all positive factors of a number.

• TASK 4.3 — Prime Factorization (`prime_factorize`)  
  We compute the prime factorization of a number and print the resulting list of prime factors.

• TASK 5 — Pascal’s Triangle  
  We generate and print the first ten rows of Pascal’s Triangle using an iterative vector-based approach.

NOTES

We use only standard C++ libraries such as `<iostream>`, `<vector>`, and `<cmath>`. The program compiles using the MinGW-w64 g++ compiler on Windows, and it requires no external dependencies. All results are printed directly to the console when the program runs.

End of README
