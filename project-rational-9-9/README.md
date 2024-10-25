# Rational Numbers Exercise 9.6 - C++

This repository contains the solution for **Exercise 9.6: Rational Numbers** from **C++ How to Program (11th Edition)** by Deitel and Deitel. The exercise involves implementing a `RationalNumber` class to handle and operate on rational numbers using Object-Oriented Programming principles.

## Exercise Overview

The objective of this exercise is to:

1. Create a **RationalNumber** class to model rational numbers as fractions.
2. Implement and demonstrate:
    - Simplification (reduction) of fractions.
    - Arithmetic operations on rational numbers using operator overloading.
    - Comparison operations on rational numbers.

## Key Concepts

This exercise demonstrates several core C++ OOP concepts, including:

- **Classes and Objects**: Defining a `RationalNumber` class to encapsulate the properties and behaviors of rational numbers.
- **Operator Overloading**: Enabling arithmetic and comparison operations using operators.
- **Encapsulation**: Using private data members and public member functions.
- **Fraction Reduction**: Simplifying fractions by dividing the numerator and denominator by their greatest common divisor (GCD).

## Class Design

The `RationalNumber` class includes:

1. **Data Members**:
    - `numerator` (int): Stores the numerator of the rational number.
    - `denominator` (int): Stores the denominator of the rational number (non-zero).

2. **Member Functions**:
    - **Constructors**: To initialize rational numbers with specified or default values.
    - **Arithmetic Operators**:
        - `+` for addition of rational numbers.
        - `-` for subtraction.
        - `*` for multiplication.
        - `/` for division.
    - **Comparison Operators**:
        - `==`, `!=`, `<`, `<=`, `>`, and `>=` for comparing rational numbers.
    - **Simplification Function**:
        - A private helper function to reduce fractions to their simplest form.
    - **Input and Output Operators**:
        - `>>` for inputting a rational number.
        - `<<` for outputting a rational number in `numerator/denominator` format.

## Getting Started

To run the code in this repository, you need a C++ compiler. Follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/RationalNumberExercise9.6.git

2. Navigate to the folder:
    ```bash
    cd project-rational-9-9

3. Compile the code:
    ```bash
    g++ RationalNumber.cpp -o RationalNumber

4. Run the executable:
    ```bash
    ./RationalNumber

Example Usage
    ```bash

    RationalNumber r1(2, 3);    // Represents 2/3
    RationalNumber r2(3, 4);    // Represents 3/4

    RationalNumber result = r1 + r2;
    std::cout << "Sum: " << result << std::endl;

    result = r1 - r2;
    std::cout << "Difference: " << result << std::endl;

    result = r1 * r2;
    std::cout << "Product: " << result << std::endl;

    result = r1 / r2;
    std::cout << "Quotient: " << result << std::endl;

    std::cout << "Is r1 == r2? " << (r1 == r2 ? "Yes" : "No") << std::endl;

License
This project is licensed under the MIT License - see the LICENSE file for details.

This exercise is based on the concepts of fractions and rational arithmetic as described in C++ How to Program by Deitel and Deitel, making it a practical example of operator overloading and object-oriented design in C++.

    vbnet

    This `README.md` provides a comprehensive structure and explains the functionality of the Rational Number exercise in an easy-to-understand way. Let me know if you'd like any further modifications!
