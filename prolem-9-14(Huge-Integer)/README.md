# HugeInteger Exercise 9.14 - C++

This repository contains the solution for **Exercise 9.14: HugeInteger Class** from **C++ How to Program (11th Edition)** by Deitel and Deitel. This exercise involves creating a `HugeInteger` class to store and manipulate extremely large integers that exceed standard data type limits, showcasing advanced object-oriented programming concepts in C++.

## Exercise Overview

The objective of this exercise is to:

1. Develop a **HugeInteger** class to represent large integers with up to 40 digits.
2. Implement:
    - Member functions to perform arithmetic operations on huge integers.
    - Comparison operators to compare large integer values.
    - Functions to parse, input, and output huge integers.

## Key Concepts

This exercise emphasizes several advanced C++ OOP concepts:

- **Classes and Objects**: Designing a `HugeInteger` class to handle very large integers.
- **Operator Overloading**: Enabling arithmetic (`+`, `-`, `*`, `/`, `%`) and comparison (`==`, `!=`, `<`, `>`, `<=`, `>=`) operators for large integers.
- **Array Manipulation**: Storing each digit of the huge integer in an array for easy manipulation.
- **Data Validation**: Ensuring valid input and operations on large integers.

## Class Design

The `HugeInteger` class includes:

1. **Data Members**:
    - `digits[40]` (int array): Stores each digit of the huge integer, supporting up to 40 digits.
    - `size` (int): Stores the number of digits currently in use in `digits`.

2. **Member Functions**:
    - **Constructors**: Initialize the `HugeInteger` with default or specific values.
    - **Arithmetic Operators**:
        - `+`, `-`, `*`, `/`, and `%` for adding, subtracting, multiplying, dividing, and modulus of huge integers.
    - **Comparison Operators**:
        - `==`, `!=`, `<`, `<=`, `>`, and `>=` for comparing huge integers.
    - **Input and Output Functions**:
        - Overloaded `>>` and `<<` operators for input and output of huge integers.
    - **Utility Functions**:
        - `parse()`: To initialize `HugeInteger` from a string of digits.
        - `isZero()`: Checks if the huge integer is zero.

## Getting Started

To run the code in this repository, you need a C++ compiler. Follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/HugeIntegerExercise9.14.git
   
2. Navigate to the folder:
    ```bash
    cd prolem-9-14(Huge-Integer)


3. Compile the code:
    ```bash
    g++ HugeInteger.cpp -o HugeInteger

4. Run the executable:
    ```bash
    ./HugeInteger

Example Usage

    ```bash
    HugeInteger h1("1234567890123456789012345678901234567890");
    HugeInteger h2("9876543210987654321098765432109876543210");

    HugeInteger result = h1 + h2;
    std::cout << "Sum: " << result << std::endl;

    result = h1 - h2;
    std::cout << "Difference: " << result << std::endl;

    result = h1 * h2;
    std::cout << "Product: " << result << std::endl;

    std::cout << "Is h1 == h2? " << (h1 == h2 ? "Yes" : "No") << std::endl;
