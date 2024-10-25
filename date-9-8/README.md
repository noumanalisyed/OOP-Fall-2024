# Date Exercise 9.8 - C++

This repository contains the solution for **Exercise 9.8: Date Class** from **C++ How to Program (11th Edition)** by Deitel and Deitel. This exercise involves implementing a `Date` class in C++ to store, manipulate, and display dates, providing insights into object-oriented design and data validation.

## Exercise Overview

The objective of this exercise is to:

1. Develop a **Date** class to represent dates with day, month, and year.
2. Implement:
    - Functions to set and retrieve date values.
    - Member functions to validate the day and handle month-end rollover.
    - A method to increment the date by one day, adjusting the month and year as necessary.

## Key Concepts

This exercise emphasizes several core C++ OOP concepts:

- **Classes and Objects**: Creating a `Date` class to encapsulate date-related functionality.
- **Encapsulation**: Using private data members to securely store date values and public member functions to access and modify them.
- **Data Validation**: Ensuring valid values for day, month, and year using internal checks.
- **Date Manipulation**: Incrementing dates while handling month and year changes, including leap year checks.

## Class Design

The `Date` class includes:

1. **Data Members**:
    - `day` (int): Stores the day component (1-31, depending on the month and year).
    - `month` (int): Stores the month component (1-12).
    - `year` (int): Stores the year component (e.g., 2024).

2. **Member Functions**:
    - **Constructors**: Initialize the date with default or specified values, validating inputs.
    - **Setters and Getters**:
        - `setDate(int d, int m, int y)`: Sets the date with input validation.
        - `setDay(int d)`, `setMonth(int m)`, `setYear(int y)`: Set individual components of the date.
    - **Increment Function**:
        - `nextDay()`: Advances the date by one day, adjusting for month-end and year-end if necessary.
    - **Display Function**:
        - `printDate()`: Displays the date in `DD/MM/YYYY` format.

3. **Utility Functions**:
    - Private helper functions for validating day, month, and leap year status.

## Getting Started

To run the code in this repository, you need a C++ compiler. Follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/DateExercise9.8.git

2. Navigate to the folder:
    ```bash
    cd date-9-8

3. Compile the code:
    ```bash
    g++ Date.cpp -o Date

4. Run the executable:
    ```bash
    ./Date

Example Usage

    ```bash
    Date date(28, 2, 2024);    // Initializes date as February 28, 2024

    std::cout << "Current Date: ";
    date.printDate();          // Displays date in DD/MM/YYYY format

    date.nextDay();            // Increment date by one day
    std::cout << "\nNext Day: ";
    date.printDate();          // Displays updated date (29/02/2024 due to leap year)
