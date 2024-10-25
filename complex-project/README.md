# Complex Numbers Exercise - C++

This repository contains the solution to the **Complex Numbers Exercise** from **C++ How to Program (11th Edition)** by Deitel and Deitel. This exercise demonstrates the implementation of complex numbers in C++ using Object-Oriented Programming (OOP) principles.

## Exercise Overview

The objective of this exercise is to:

1. Create a **ComplexNumber** class to model and operate on complex numbers.
2. Implement and demonstrate:
    - Addition, subtraction, multiplication, and division of complex numbers.
    - Overloaded operators for these arithmetic operations.
    - Input and output of complex numbers.

## Key Concepts

This exercise covers several key OOP concepts in C++:

- **Classes and Objects**: Creating and using a `ComplexNumber` class.
- **Operator Overloading**: Implementing arithmetic operations using operator overloading.
- **Encapsulation**: Using private data members and public member functions.
- **Friend Functions**: To access private members of complex numbers during operations.
- **Dynamic Memory Management** (if applicable): Demonstrates managing memory where needed.

## Class Design

The `ComplexNumber` class includes:

1. **Data Members**:
    - `real` (double): Represents the real part of the complex number.
    - `imaginary` (double): Represents the imaginary part of the complex number.

2. **Member Functions**:
    - **Constructors**: Initialize complex numbers with specified or default values.
    - **Overloaded Operators**:
        - `+` for addition
        - `-` for subtraction
        - `*` for multiplication
        - `/` for division
    - **Input and Output Operators**:
        - `>>` for inputting a complex number.
        - `<<` for outputting a complex number.

3. **Utility Functions**: Functions for displaying and setting values of complex numbers.

## Getting Started

To run the code in this repository, you need to have a C++ compiler. Follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/ComplexNumberExercise.git

2. Navigate to the folder:
    ```bash
    cd ComplexNumberExercise
3. Compile the code:
    ```bash
    g++ ComplexNumber.cpp -o ComplexNumber
4. Run the executable:
    ```bash
    ./ComplexNumber


Example Usage
    ```bash
    
    ComplexNumber c1(3.0, 4.0);
    ComplexNumber c2(1.0, -2.0);

    ComplexNumber result = c1 + c2;
    std::cout << "Sum: " << result << std::endl;

    result = c1 - c2;
    std::cout << "Difference: " << result << std::endl;

    result = c1 * c2;
    std::cout << "Product: " << result << std::endl;

    result = c1 / c2;
    std::cout << "Quotient: " << result << std::endl;


    ```vbnet
    License
    This project is licensed under the MIT License - see the LICENSE file for details.

    This exercise aligns with the OOP principles taught in C++ How to Program by Deitel and Deitel, 
    giving a practical understanding of complex numbers in C++.

```vbnet

    This `README.md` outlines the purpose, 
    structure, and usage of the Complex Number exercise effectively. 
    Let me know if you'd like any changes!
