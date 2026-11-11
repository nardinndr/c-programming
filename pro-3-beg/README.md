
# Smart Visitor Counter in C

## Project Description

This project is a small C programming exercise
that simulates a visitor counter for a swimming pool.

The program reads the number of visitors during
three shifts and calculates useful statistics.

## Features

- Read three integer inputs
- Calculate the total number of visitors
- Calculate the average visitors per shift
- Calculate the number of groups needed
- Simulate a 16-bit unsigned counter
- Handle unsigned integer wraparound

## Concepts Practiced

- Variables and data types
- scanf() and printf()
- Mathematical expressions
- Integer division
- Type casting
- Ceiling division
- Hexadecimal numbers
- Unsigned integer overflow

## Example Input

5 6 8

## Expected Output

Total visitors: 19
Average visitors: 6.33
Groups needed: 4
Final counter: 13

## Compilation

gcc -std=c99 -Wall -Wextra -Wpedantic visitor_counter.c -o visitor_counter

## Execution

./visitor_counter
