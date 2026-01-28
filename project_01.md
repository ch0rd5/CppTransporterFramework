# Project 1: Transporters

## Purpose and Context

This project establishes the **baseline C++ structure and coding expectations** for the remainder of the course. The focus is on writing clean, correct, multi-file C++ code that uses interfaces, templates, operator overloading, and a Makefile.

Future projects will reuse this same structure while changing the underlying data structures. Treat this assignment as the foundation you will build on for the rest of the semester.

---

## Project Goals

This project reviews and assesses your understanding of:

1. C++ class design and compilation
2. Templates
3. Interfaces (pure abstract base classes)
4. Operator overloading
5. Const correctness
6. Makefiles

---

## Program Overview

You will implement a small program that models **transporters**. There are two concrete transporters in this project:

* A **Train** that carries cargo
* A **Bus** that carries people

Both share common behavior and must conform to a shared interface, but differ in what they transport and how they behave.

---

## Coding Style Expectations

In lecture and examples, we use the following conventions:

* **Class and type names:** PascalCase
* **Function and method names:** camelCase

C++ does not enforce naming style, but consistency and readability matter. You are expected to follow this style throughout the project.

---

## The Transporter Interface

You must define a `Transporter` interface. In C++, this means a **pure abstract base class** with no associated `.cpp` file.

Conceptually, every transporter must support the following operations:

```cpp
load(item);
unload();
empty();
move();
isEmpty() const;
getCount() const;
```

You are not required to use these exact names or signatures, but your design must provide all of this functionality.

Because this is an interface:

* All member functions should be `virtual`
* Functions that do not modify state must be marked `const`
* A virtual destructor is expected

---

## Templates and Storage (No STL)

Transporters must be capable of storing **items of any type**, which means **templates are required**.

For this project:

* A `Train` stores `Cargo`
* A `Bus` stores `Person`

You may use:

* Raw arrays
* Dynamically allocated arrays
* A fixed maximum capacity

You may **not** use STL containers (`vector`, `list`, `map`, etc.).

---

## Train

A `Train`:

* Implements the `Transporter` interface
* Stores `Cargo` objects
* Allows cargo to be loaded in any order
* Can report the **total weight** of all cargo
* Displays a message when `move()` is called (e.g., reaching the next destination)

### Cargo

Each `Cargo` object must contain:

```cpp
string type;
double weight;
```

Appropriate accessor functions should be `const`.

---

## Bus

A `Bus`:

* Implements the `Transporter` interface
* Stores `Person` objects
* Maintains passengers sorted from **shortest to tallest**

  * Sorting must occur automatically when passengers are loaded
* Has a fare that can be changed
* Can report the **total fare** for all passengers
* Displays a message when `move()` is called (e.g., reaching the next stop)

### Person

Each `Person` object must contain:

```cpp
string name;
double height;
```

Comparison by height should be implemented cleanly and consistently.

---

## Operator Overloading

You must demonstrate **at least one meaningful operator overload**.

Common and appropriate examples include:

* Comparing `Person` objects by height:

```cpp
bool operator<(const Person& other) const;
```

* Printing objects using:

```cpp
ostream& operator<<(ostream& out, const Person& p);
```

Your operator overloading should improve clarity or correctness, not exist solely to satisfy the requirement.

---

## Const Correctness

You are expected to apply `const` correctly throughout the project.

In particular:

* Accessor functions should be marked `const`
* Parameters passed by reference that are not modified should be `const`
* Interface methods that do not modify object state should be `const`

This will be evaluated as part of the design.

---

## Driver Program

Your `driver.cpp` must:

* Create a `Train` and load it with multiple `Cargo` objects
* Create a `Bus` and load it with multiple `Person` objects
* Demonstrate **all required functionality**, including:

  * Loading
  * Unloading
  * Emptying
  * Counting items
  * Checking empty status
  * Moving
  * Train weight reporting
  * Bus fare calculation

All console input and output should occur in `main`,
**except** output produced by the `move()` functions.

---

## Files and Build Requirements

* **A Makefile is required**

  * It must compile all source files
  * It must produce a working executable
* Separate class declarations (`.h`) and definitions (`.cpp`)
* Required classes:

  * `Transporter` (interface only)
  * `Train`
  * `Bus`
  * `Cargo`
  * `Person`

* Include a `README.md` that describes:

  * Program functionality
  * How to compile and run the program
  * Any notable design decisions
* Code should be commented clearly and professionally

---

## Supported Toolchains

All projects in this course will be compiled and graded using **C++17**.

Your code must compile successfully with one of the following standard toolchains:

### Supported Compilers

* **GCC (g++)** version **9 or newer**
* **Clang (clang++)** version **10 or newer**

### Required Compile Flag

You must compile with:

```bash
-std=c++17
```

### Example

The following shows the compiler flags used by the Makefile:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic *.cpp -o transporter
```
These flags are already included in the provided Makefile.

### Operating Systems

* Linux
* macOS
* Windows (via WSL, MinGW, or a compatible environment)

### Notes

* IDEs are allowed, but your code must compile from the command line using `make`.
* Submissions that rely on non-standard extensions or newer language standards may not compile in the grading environment.
* If your code compiles cleanly with `make` using C++17, you are in good shape.

## Makefiles

* There's a makefile included in the project zip file.
* See https://makefiletutorial.com/ for make file help.

### Building and Running Code
* To build your project, open a terminal in your project directory and run make.
* To clean compiled files, run make clean.
* To build and run your program, run make run.

---
## File Submission Instructions

Submit **one ZIP file** containing **only the relevant project files**.

### ZIP File Name

Your ZIP file **must** be named exactly: `project_01_lastname.zip`

Replace `lastname` with your own last name.

### Files to Include

Your ZIP file should include:
- All `.h` and `.cpp` files for the project
- Your `Makefile`
- `README.md`

### Files to Exclude

Do **not** include:
- Compiled files (`.o`, executables)
- IDE-specific files or folders
- Unrelated or temporary files

### Before Submitting

Before creating the ZIP file:
1. Run `make clean`
2. Verify that `make` builds the program successfully
3. Verify that the program runs correctly

Submissions that do not follow the naming or packaging instructions may receive a penalty.

---
## Final Notes

This project emphasizes **structure, correctness, and clarity**. Future projects will build directly on these expectations while introducing new data structures and behaviors.

Ask and answer questions in canvas!

Go Team.
