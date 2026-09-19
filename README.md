# C++ Console Projects — Learning Journey

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/status-learning-yellow)
![Platform](https://img.shields.io/badge/platform-console-lightgrey)

A collection of small C++ projects built while developing my programming fundamentals and preparing for a path into game development.

I am a self-taught programmer from Pakistan, currently building my foundation through practical projects rather than learning concepts in isolation. Each project in this repository focuses on a different set of programming concepts, while gradually increasing in complexity.

These projects are small themselves but the learning isn't. These are important stage of my learning journey.

My long-term goal is to apply these fundamentals to **game development**, with **Godot, My own Gaming Engine, and C++** as the next stage of my learning.

---

## Projects

### 🐉 Dragon Cave — Text RPG

A branching text-based adventure game featuring exploration, a puzzle-based gate, and turn-based combat.

The combat system includes HP tracking, multiple attack types, and special-move cooldowns.

**Concepts practiced:**
- Functions
- Nested control flow
- Game-state management
- Variables and state tracking
- Turn-based logic
- Cooldown systems

This project was an early step toward thinking about programming in terms of **game systems and player interaction**.

---

### 💱 Currency Converter

A currency conversion program supporting more than 150 currencies through a static exchange-rate dataset.

The program searches the dataset for the selected currencies and performs the required conversion.

**Concepts practiced:**
- Structures (`struct`)
- Arrays
- Array iteration
- Linear search
- Floating-point arithmetic
- Data organization

This project helped me move from simple calculations toward working with structured data.

---

### 📏 Unit Converter

A multi-purpose conversion program covering metric prefixes, distance, weight, and temperature.

Each section uses its own conversion logic and validated input loop.

**Concepts practiced:**
- Functions
- Modular program design
- Input validation
- `cin.fail()`
- Loops
- User interaction

This project placed particular emphasis on **reliable input handling**, ensuring that unexpected user input does not cause the program to behave incorrectly.

---

### ⭕ Tic-Tac-Toe

A two-player console implementation of Tic-Tac-Toe with complete win and draw detection.

The program evaluates rows, columns, and diagonals to determine the outcome of each game.

**Concepts practiced:**
- 2D arrays
- Nested loops
- Conditional logic
- Win-condition algorithms
- Turn-based state management
- Game loops

This project gave me practical experience translating a set of rules into an algorithm that continuously evaluates game state.

---

### 📊 Grade Calculator

A program that calculates total marks and percentage averages across a user-defined number of subjects.

**Concepts practiced:**
- Arrays
- Structures
- Dynamic-sized data
- Input validation
- Arithmetic operations

Although simple, this project helped reinforce the fundamentals of handling collections of related data and validating user input.

---

## What These Projects Demonstrate

Together, these projects represent my progression through several core programming concepts:

**Fundamentals → Data → Functions → Validation → Algorithms → Game Logic**

Rather than treating each concept as an isolated exercise, I have tried to apply what I learn by building complete programs around it.

The projects also show how my focus has gradually shifted from basic calculations and data handling toward **interactive programs and game-oriented logic**.

---

## Development Approach

I am building these projects independently as part of my self-directed learning.

I do not consider the current code to be the final version of my programming ability. As I learn more about software design and development, I expect to revisit older projects, identify weaknesses, and improve them.

That progression is one of the main reasons I keep these projects in a single repository: it provides a record of what I have built, what I have learned, and how my approach to programming develops over time.

---

## Build & Run

The projects are intentionally lightweight and have no external dependencies.

Compile a project using:

```bash
g++ filename.cpp -o output
