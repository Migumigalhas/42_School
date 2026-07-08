*This project has been created as part of the 42 curriculum by miggomes & nuelblin.*

# push_swap

## Description

**push_swap** is an algorithmic project from the 42 curriculum whose objective is to sort a stack of integers using the smallest possible number of operations.

The program receives a list of integers representing **stack A**, while **stack B** starts empty. The stack must be sorted in ascending order (smallest value on top) using only the operations allowed by the subject (`sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, and `rrr`).

Unlike traditional sorting algorithms, the goal is not only to produce a sorted sequence but also to minimize the number of stack operations. This project focuses on algorithm design, complexity analysis, optimization, and efficient manipulation of linked data structures.

This implementation embeds four different sorting strategies:

* **Simple** — O(n²)
* **Medium** — O(n√n)
* **Complex** — O(n log n)
* **Adaptive** — automatically selects one of the previous strategies according to the measured disorder of the input.

---

# Allowed Operations

| Operation | Description                                  |
| --------- | -------------------------------------------- |
| sa        | Swap the first two elements of stack A       |
| sb        | Swap the first two elements of stack B       |
| ss        | Execute `sa` and `sb` simultaneously         |
| pa        | Push the top element of stack B onto stack A |
| pb        | Push the top element of stack A onto stack B |
| ra        | Rotate stack A upwards                       |
| rb        | Rotate stack B upwards                       |
| rr        | Rotate both stacks upwards                   |
| rra       | Reverse rotate stack A                       |
| rrb       | Reverse rotate stack B                       |
| rrr       | Reverse rotate both stacks                   |

---

# Measuring Disorder

Before performing any operation, the program evaluates how disordered the input is.

The disorder metric is based on the percentage of inversions present in the input.

An inversion is any pair of elements `(i, j)` such that:

* `i < j`
* `a[i] > a[j]`

The disorder is computed as

```
disorder = inversions / total_pairs
```

where

```
total_pairs = n × (n − 1) / 2
```

The resulting value is always between **0** and **1**.

Examples:

| Input   | Disorder |
| ------- | -------- |
| 1 2 3 4 | 0%       |
| 1 3 2 4 | 16.67%   |
| 2 1 4 3 | 33.33%   |
| 4 3 2 1 | 100%     |

This value determines which sorting strategy is selected by the adaptive algorithm.

---

# Implemented Strategies

## 1. Simple Strategy — O(n²)

The simple strategy is intended for nearly sorted inputs.

It is based on an insertion-sort style approach that repeatedly places misplaced elements into their correct position using the available stack operations.

Because only a few elements are generally misplaced when the disorder is low, this strategy performs well despite its quadratic worst-case complexity.

### Complexity

Time:

```
O(n²)
```

Space:

```
O(1)
```

---

## 2. Medium Strategy — O(n√n)

The medium strategy divides the input into approximately **√n chunks**.

Each chunk represents a range of values.

The algorithm:

1. Splits the value range into √n intervals.
2. Pushes every value belonging to the current chunk into stack B.
3. Reconstructs stack A by retrieving the elements from B in the correct order.

Chunking greatly reduces unnecessary rotations while avoiding the overhead of more sophisticated algorithms.

This strategy performs particularly well on moderately shuffled inputs.

### Complexity

Time:

```
O(n√n)
```

Space:

```
O(n)
```

---

## 3. Complex Strategy — O(n log n)

The complex strategy is based on **Least Significant Digit (LSD) Radix Sort**.

Since radix sort operates on consecutive integer values, the input is first transformed using **coordinate compression**.

Each integer is replaced by its rank in the sorted order.

The algorithm then processes every bit from least significant to most significant:

* elements whose current bit is 0 are pushed to stack B;
* elements whose current bit is 1 are rotated inside stack A;
* after each pass, all elements are pushed back into stack A.

This method provides stable performance regardless of the initial order of the input and is especially effective for large datasets.

### Complexity

Time:

```
O(n log n)
```

Space:

```
O(n)
```

---

## 4. Adaptive Strategy

The adaptive strategy automatically selects one of the previous algorithms according to the measured disorder.

| Disorder               | Selected Strategy | Complexity |
| ---------------------- | ----------------- | ---------- |
| disorder < 0.20        | Simple            | O(n²)      |
| 0.20 ≤ disorder < 0.50 | Medium            | O(n√n)     |
| disorder ≥ 0.50        | Complex           | O(n log n) |

### Rationale

Very small disorder indicates that only a limited number of inversions must be corrected, making the simple strategy the most efficient.

Moderate disorder benefits from chunk partitioning, which balances operation count and execution cost.

Highly disordered inputs require a scalable algorithm whose performance does not depend heavily on the initial ordering, making radix sort the preferred choice.

---

# Complexity Summary

| Strategy | Time                         | Space                        |
| -------- | ---------------------------- | ---------------------------- |
| Simple   | O(n²)                        | O(1)                         |
| Medium   | O(n√n)                       | O(n)                         |
| Complex  | O(n log n)                   | O(n)                         |
| Adaptive | Depends on selected strategy | Depends on selected strategy |

---

# Instructions

## Requirements

* GCC or Clang
* GNU Make
* Linux or macOS

---

## Compilation

```bash
make
```

---

## Cleaning

```bash
make clean
make fclean
make re
```

---

## Running

Default adaptive mode:

```bash
./push_swap 3 2 1 5 4
```

Force the simple strategy:

```bash
./push_swap --simple 3 2 1
```

Force the medium strategy:

```bash
./push_swap --medium 3 2 1
```

Force the complex strategy:

```bash
./push_swap --complex 3 2 1
```

Force adaptive mode:

```bash
./push_swap --adaptive 3 2 1
```

---


# Error Handling

The program prints

```
Error
```

to **stderr** whenever:

* an argument is not an integer;
* a value exceeds the limits of a signed 32-bit integer;
* duplicate values are detected;
* invalid options are supplied.

If no arguments are provided, the program exits silently.

---

# Project Structure

```
.
├── include/
├── src/
├── libft/
├── Makefile
└── README.md
```

---

# Performance

The project is designed to satisfy the requirements of the subject.

Target performances are:

| Dataset     | Excellent         |
| ----------- | ----------------- |
| 100 numbers | < 700 operations  |
| 500 numbers | < 5500 operations |

---

## Resources

- [man 2 read](https://man7.org/linux/man-pages/man2/read.2.html) — read syscall documentation
- [man 2 open](https://man7.org/linux/man-pages/man2/open.2.html) — open syscall documentation
- 42 project subject PDF

---

### AI Usage

Claude (Anthropic) was used during this project for the following:

- Explaining concepts such as static variables, file descriptors, and `BUFFER_SIZE`
- Reviewing code for memory leaks and norm violations (25-line limit per function)
- Helping debug a memory leak caused by freeing `storage` before saving the new `ft_substr` result into a temp variable

## Author

miggomes & nuelblin