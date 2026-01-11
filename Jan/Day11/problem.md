# Maximal Rectangle (LeetCode 85)

## Problem Statement

Given a `rows × cols` binary matrix filled with `'0'` and `'1'`, find the largest rectangle containing only `1`s and return its area.

---

## Input

- A 2D binary matrix `matrix` of size `rows × cols`
- Each cell contains either `'0'` or `'1'`

---

## Output

- An integer representing the **area of the largest rectangle** consisting only of `1`s

---

## Example

### Input
[
["1","0","1","0","0"],
["1","0","1","1","1"],
["1","1","1","1","1"],
["1","0","0","1","0"]
]
### Output
6

---

## Explanation

The largest rectangle of `1`s has an area of `6`, formed in the third row by columns 1 to 3.

---

## Constraints

- `1 <= rows, cols <= 200`
- `matrix[i][j]` is `'0'` or `'1'`

---

## Notes

- Brute force solutions are too slow for large inputs
- An optimized solution is required using stacks and histograms


