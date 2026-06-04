# 📘 C Programming Practice Repository

A collection of C and C++ programs written while learning the fundamentals of programming — from basic operators and loops to data structures and a full-featured banking system.

---

## 📋 Table of Contents

- [About](#about)
- [Programs Overview](#programs-overview)
  - [Basics & Operators](#basics--operators)
  - [Loops & Patterns](#loops--patterns)
  - [Arrays & Strings](#arrays--strings)
  - [Structs & Data Structures](#structs--data-structures)
  - [C++ Programs](#c-programs)
  - [Major Project](#major-project)
- [How to Compile & Run](#how-to-compile--run)
- [Tech Stack](#tech-stack)
- [Project Structure](#project-structure)
- [Author](#author)

---

## About

This repository documents my journey learning C programming from scratch. It covers fundamental concepts including variables, operators, control flow, loops, arrays, strings, structs, file I/O, and algorithmic thinking. Each file represents a practice exercise or concept demonstration.

---

## Programs Overview

### Basics & Operators

| File | Description |
|------|-------------|
| `6th prog.c` | Takes two float numbers as input and prints their sum |
| `logical.c` | Demonstrates arithmetic operations (`+`, `-`, `*`, `/`) on two integers |
| `relational.c` | Demonstrates all relational operators (`>`, `<`, `==`, `!=`, `>=`, `<=`) on two integers |
| `10th prog.c` | Computes the floating-point modulus of two numbers using `fmod()` |

---

### Loops & Patterns

| File | Description |
|------|-------------|
| `3rd_prog.c` | Nested `for` loop — prints row index in a 4×3 grid |
| `nested loop.c` | Nested loop that prints a right-aligned triangle of `*` characters |
| `9th prog.c` | Collection of commented loop/pattern tasks — grid numbers, star triangles, sequential printing |
| `8th_prog.c` | **Grade Star Printer** — reads exam marks and prints a star pyramid based on the grade range using a helper function `starprinter(n)` |

---

### Arrays & Strings

| File | Description |
|------|-------------|
| `4th_prog.c` | **Bubble Sort** — sorts a hardcoded integer array in ascending order |
| `5th_prog.c` | Reads a 3×3 integer matrix from user input and prints it formatted |
| `2nd_prog.c` | **Palindrome Checker** — reads a string and checks if it reads the same forwards and backwards |
| `7th_prog.c` | **Vowel Counter** — scans a string, detects vowels (both uppercase and lowercase), and prints the count |

---

### Structs & Data Structures

| File | Description |
|------|-------------|
| `test.c` | Defines a `Student` struct with `id`, `name`, and `cgpa` fields; reads and prints a single student record |
| `x.c` | Extends the Student struct to an **array of 10 students** — reads and prints 3 student records using a loop |

---

### C++ Programs

| File | Description |
|------|-------------|
| `fibo.cpp` | **Fibonacci (Dynamic Programming)** — calculates the nth Fibonacci number using a `vector`-based DP approach instead of plain recursion |
| `sorting.cpp` | **Odd-Even Separator** — separates the elements of an array into odd and even groups and prints them |
| `new.cpp` | Two programs: (1) finds the **unique element** in an array using XOR; (2) finds the **maximum of three numbers** using `if-else` |
| `practice.cpp` | Reads a number and prints `YES` if it is even, `NO` if it is odd |
| `Firstprog 1.c` | **XOR up to N** — a competitive programming utility that efficiently computes XOR of all integers from 1 to N using a mathematical pattern |

---

### Major Project

#### 🏦 Bank Management System

**Files:** `BANK_Project.c` · `forloop.c` (enhanced version)

A console-based banking application built in C with persistent file storage.

**Features:**
- ✅ Create a new bank account with a unique account number, holder name, and initial balance
- ✅ Deposit money into an existing account
- ✅ Withdraw money with insufficient-balance validation
- ✅ Check account balance and view full account details
- ✅ View all registered accounts
- ✅ Reset / remove all accounts (enhanced version only)
- ✅ Persistent data storage using binary file I/O (`accounts.txt`)
- ✅ Duplicate account number detection (enhanced version)
- ✅ Input validation for negative amounts

**Core Concepts Used:** Structs, arrays, file I/O (`fread`/`fwrite`), functions, loops, conditional logic, `#define` constants

---

## How to Compile & Run

You need **GCC** (for C files) and **G++** (for C++ files) installed.

**Compile a C file:**
```bash
gcc filename.c -o output -lm
./output
```

**Compile a C++ file:**
```bash
g++ filename.cpp -o output
./output
```

**Example — Bank Project:**
```bash
gcc BANK_Project.c -o bank
./bank
```

> **Note:** The Bank Management System reads/writes to `accounts.txt` in the same directory. Make sure you run the executable from the project folder.

---

## Tech Stack

- **Language:** C (C99/C11), C++ (C++17)
- **Compiler:** GCC / G++
- **IDE / Editor:** VS Code with C/C++ extension
- **Platform:** Windows (compiled with MinGW)

---

## Project Structure

```
C_programms/
│
├── 📂 Basic Operators
│   ├── 6th prog.c          # Float addition
│   ├── logical.c           # Arithmetic operations
│   ├── relational.c        # Relational operators
│   └── 10th prog.c         # Float modulus (fmod)
│
├── 📂 Loops & Patterns
│   ├── 3rd_prog.c          # Nested loop grid
│   ├── 9th prog.c          # Loop pattern tasks
│   ├── nested loop.c       # Star triangle
│   └── 8th_prog.c          # Grade star printer
│
├── 📂 Arrays & Strings
│   ├── 4th_prog.c          # Bubble sort
│   ├── 5th_prog.c          # 3×3 matrix
│   ├── 2nd_prog.c          # Palindrome checker
│   └── 7th_prog.c          # Vowel counter
│
├── 📂 Structs
│   ├── test.c              # Single student struct
│   └── x.c                 # Array of student structs
│
├── 📂 C++ Programs
│   ├── fibo.cpp            # Fibonacci (DP)
│   ├── sorting.cpp         # Odd-even separator
│   ├── new.cpp             # XOR unique + max of 3
│   ├── practice.cpp        # Even/odd checker
│   └── Firstprog 1.c       # XOR up to N (CP utility)
│
└── 📂 Major Project
    ├── BANK_Project.c      # Bank management system (v1)
    ├── forloop.c           # Bank management system (v2 - enhanced)
    └── accounts.txt        # Persistent account data (auto-generated)
```

---

## Author

**[Your Name]**
- 🐙 GitHub: [@yourusername](https://github.com/yourusername)
- 📧 Email: your@email.com

---

> *This repository is part of my self-learning journey in C programming. Feedback and suggestions are always welcome!*
