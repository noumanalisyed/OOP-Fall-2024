# Time Exercise 9.7 - C++

This repository contains the solution for **Exercise 9.7: Time Class** from **C++ How to Program (11th Edition)** by Deitel and Deitel. The exercise involves implementing a `Time` class to represent and manipulate time values in C++ using Object-Oriented Programming (OOP) principles.

## Exercise Overview

The objective of this exercise is to:

1. Develop a **Time** class to store and operate on time values (hours, minutes, and seconds).
2. Implement:
    - Functions to set and retrieve time values.
    - Member functions for incrementing time.
    - A method to display time in both 24-hour and 12-hour formats.

## Key Concepts

This exercise emphasizes several fundamental C++ OOP concepts:

- **Classes and Objects**: Creating a `Time` class to manage and manipulate time values.
- **Encapsulation**: Using private data members to store time components and public methods to access and modify them.
- **Data Validation**: Ensuring time values (hours, minutes, seconds) are within valid ranges.
- **Modular Design**: Structuring the class to provide versatile time operations in both 12-hour and 24-hour formats.

## Class Design

The `Time` class includes:

1. **Data Members**:
    - `hour` (int): Stores the hour component (0-23).
    - `minute` (int): Stores the minute component (0-59).
    - `second` (int): Stores the second component (0-59).

2. **Member Functions**:
    - **Constructors**: Initializes time with default values or specified values.
    - **Setters and Getters**:
        - `setTime(int h, int m, int s)`: Sets time with input validation.
        - `setHour(int h)`, `setMinute(int m)`, `setSecond(int s)`: Set individual components of time.
    - **Increment Functions**:
        - `tick()`: Increments time by one second, adjusting minutes and hours if necessary.
    - **Display Functions**:
        - `printUniversal()`: Displays time in 24-hour format.
        - `printStandard()`: Displays time in 12-hour format with AM/PM notation.

## Getting Started

To run the code in this repository, you need a C++ compiler. Follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/TimeExercise9.7.git

2. Navigate to the folder:
    ```bash
    cd Project-Time

3. Compile the code:
    ```bash
    g++ Time.cpp -o Time

4. Run the executable:
    ```bash
    ./Time

Example Usage
    ```bash

    Time t;                   // Default time 00:00:00
    t.setTime(13, 27, 6);     // Sets time to 13:27:06 (24-hour format)

    std::cout << "Universal Time: ";
    t.printUniversal();       // Displays time in 24-hour format

    std::cout << "\nStandard Time: ";
    t.printStandard();        // Displays time in 12-hour AM/PM format

    t.tick();                 // Increment time by 1 second 
    std::cout << "\nAfter 1 second tick:\n";
    t.printUniversal();
