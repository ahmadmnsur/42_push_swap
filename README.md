![42 beirut](https://media.licdn.com/dms/image/D4E3DAQGxvimpQQFi_A/image-scale_191_1128/0/1695893480399/42_beirut_cover?e=2147483647&v=beta&t=oNrMR2IXjtfu3XXV-uSUW8wI98g19yUUHZ0XuhtX2NE)
---

# Push Swap

This repository contains my solution to the "Push Swap" project from the 42 coding school. The project involves sorting a stack of integers using a set of predefined operations and a secondary stack. The objective is to sort the numbers in the fewest possible moves.

## Project Overview

The "Push Swap" project challenges you to develop an efficient algorithm to sort a stack of integers using a limited set of operations. The program should be able to:

- Take input as a sequence of integers.
- Sort the integers using two stacks (stack `a` and stack `b`).
- Use only the following operations:
  - `sa` (swap the first two elements of stack `a`)
  - `sb` (swap the first two elements of stack `b`)
  - `ss` (simultaneously swap the first elements of both stacks)
  - `pa` (push the top element from stack `b` to stack `a`)
  - `pb` (push the top element from stack `a` to stack `b`)
  - `ra` (rotate all elements of stack `a` up by one)
  - `rb` (rotate all elements of stack `b` up by one)
  - `rr` (simultaneously rotate both stacks)
  - `rra` (reverse rotate all elements of stack `a` down by one)
  - `rrb` (reverse rotate all elements of stack `b` down by one)
  - `rrr` (simultaneously reverse rotate both stacks)

## Key Features

- **Input Validation**: The program checks for invalid inputs, including non-integer values, duplicates, and out-of-range numbers.
- **Sorting Algorithm**: Implements an optimized sorting algorithm to achieve the minimum number of operations.
- **Error Handling**: Graceful error messages for invalid input or operations.

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/ahmadmnsur/42_push_swap
   ```
2. Compile the program:
   ```bash
   make
   ```
3. Run the program with a sequence of integers:
   ```bash
   ./push_swap [sequence_of_integers]
   ```
4. The program outputs the series of operations needed to sort the stack.
---
