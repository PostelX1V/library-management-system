# Library Management System

A console-based C++ library management application built to practice object-oriented programming, class design, exception handling, and multi-file project organization.

## Overview

This program simulates a small library system where users can interact with books through a command-line menu.

The application is built around two main classes:

- `Book` — stores information about an individual book and tracks whether it is checked out or reserved.
- `Library` — stores a collection of books and manages checkout, return, reservation, and unreservation operations.

## Features

- Check out a book by ID
- Return a checked-out book
- Reserve a book
- Remove a reservation
- Prevent duplicate checkouts
- Prevent duplicate reservations
- Detect invalid book IDs
- Handle invalid library operations using exceptions
- Run continuously through an interactive console menu

## Technologies & Concepts

- C++
- Object-Oriented Programming
- Classes and Objects
- Encapsulation
- STL `vector`
- Exception Handling
- Header and Implementation Files
- Multi-file Compilation
- State Management

## Project Structure

```text
library-management-system/
├── book.cpp
├── book.h
├── library.cpp
├── library.h
├── main.cpp
├── README.md
└── .gitignore