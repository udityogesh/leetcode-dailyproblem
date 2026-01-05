# LeetCode 1975 – Maximum Matrix Sum

## Problem Statement

You are given an `n x n` integer matrix `matrix`.

You can perform the following operation any number of times:

- Choose any two adjacent elements of the matrix and multiply both by `-1`.

Two elements are considered adjacent if they share a side.

Return the **maximum possible sum of all elements** of the matrix after performing the operations optimally.

---

## Example 1

**Input**
matrix = [[1,-1],[-1,1]]

**Output**
4

---

## Constraints

- `n == matrix.length == matrix[i].length`
- `1 <= n <= 250`
- `-10^5 <= matrix[i][j] <= 10^5`

