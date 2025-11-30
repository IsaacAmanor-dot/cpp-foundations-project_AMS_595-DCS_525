# C++ Basic Syntax Project  
AMS 595 / DCS 525 — Project 1  

## Overview
This project implements several foundational C++ programming concepts, focusing on conditionals, loops, functions, vectors, and recursive structures.  
Each task corresponds to a different core feature of the language, forming a complete introduction to basic C++ syntax and logic.

The project consists of five primary components:
1. **Conditional branching** using `switch` statements.  
2. **Vector processing** through a custom print function.  
3. **Iterative sequence generation** using `while` loops.  
4. **Mathematical utilities** including primality checks, factorization, and prime factorization.  
5. **Recursive/iterative construction** of Pascal’s Triangle without combinatorial formulas.

---

## Tasks

### 🔹 Task 1: Conditional Statements (Switch-Case)
- Prompts the user for an integer.  
- Uses a `switch` statement to print:  
  - `"negative one"` for −1  
  - `"zero"` for 0  
  - `"positive one"` for 1  
  - `"other value"` for all other inputs  
- Demonstrates branching control flow in C++.

---

### 🔹 Task 2: Printing a Vector
- Implements a custom function  
  `print_vector(std::vector<int> v)`  
  to output vector contents since C++ has no built-in print utility.  
- Prints all elements separated by spaces followed by a newline.  
- Reinforces iteration and vector indexing.

---

### 🔹 Task 3: Fibonacci Sequence (While Loop)
- Generates Fibonacci numbers starting with **1** and **2**.  
- Continues until the next term exceeds **4,000,000**.  
- Prints the entire sequence in order.  
- Highlights iterative computation and loop control.

---

### 🔹 Task 4: Mathematical Functions
#### **Task 4.1 — Prime Testing (`isprime`)**
- Determines whether a number is prime.  
- Uses optimized checking up to √n.  
- Tested on inputs: 2, 10, 17.

#### **Task 4.2 — Factorization**
- Computes all positive divisors of an integer `n`.  
- Returns them in a vector.  
- Tested on: 2, 72, 196.

#### **Task 4.3 — Prime Factorization**
- Extracts the prime factorization of `n`.  
- Removes all factors of 2, then odd factors up to √n.  
- Appends any remaining prime.  
- Tested on: 2, 72, 196.

---

### 🔹 Task 5: Pascal’s Triangle (Iterative Construction)
- Prints the first **n rows** of Pascal’s Triangle.  
- Builds each row from the previous row using element-wise sums.  
- Does **not** use combinatorics formulas (as required).  
- Demonstrates recursive structure implemented iteratively.

---

## 📊 Results

The following output was generated when running the program with the input **1** for Task 1:

```text
C:\cpp>project1
Enter a number: 1
positive one
Fibonacci sequence (values <= 4000000): 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 514229 832040 1346269 2178309 3524578
isprime(2) = 1
isprime(10) = 0
isprime(17) = 1
1 2
1 2 3 4 6 8 9 12 18 24 36 72
1 2 4 7 14 28 49 98 196
2
2 2 2 3 3
2 2 7 7
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1
1 9 36 84 126 126 84 36 9 1
