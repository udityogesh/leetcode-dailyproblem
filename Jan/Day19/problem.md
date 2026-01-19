# 1292. Maximum Side Length of a Square with Sum Less than or Equal to Threshold

## Problem Statement

You are given a 2D matrix `mat` of size `m x n` consisting of **non-negative integers** and an integer `threshold`.

Your task is to find the **maximum side length** of a **square submatrix** such that the **sum of its elements is less than or equal to `threshold`**.

Return the maximum possible side length.

---

## Input

- `mat`: a 2D array of non-negative integers
- `threshold`: an integer

---

## Output

- An integer representing the maximum side length of a valid square submatrix

---

## Constraints

- `1 <= m, n <= 300`
- `0 <= mat[i][j] <= 10^4`
- `0 <= threshold <= 10^5`

---

## Example 1

**Input**
mat = [[1,1,3,2,4,3,2],
[1,1,3,2,4,3,2],
[1,1,3,2,4,3,2]]
threshold = 4

**Output**
2

**Explanation**

The largest square submatrix with sum ≤ 4 has side length 2.

---

## Example 2

**Input**
mat = [[2,2,2,2],
[2,2,2,2],
[2,2,2,2]]
threshold = 1

**Output**
0

---

## Notes

- Only square submatrices are allowed.
- The square must be fully inside the matrix.
- The sum of elements inside the square must not exceed `threshold`.
