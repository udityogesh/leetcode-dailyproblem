# Maximize Area of Square Hole in Grid

## Problem Statement

You are given an `n × m` grid. The grid initially has bars between every pair of adjacent rows and columns.

Some horizontal bars and vertical bars are removed.

- `hBars` contains the indices of removed horizontal bars
- `vBars` contains the indices of removed vertical bars

Removing **k consecutive bars** creates a gap of **k + 1 cells**.

Your task is to find the **maximum possible area of a square hole** that can be formed in the grid after removing the given bars.

Return the **area** of the largest square hole.

---

## Input

- `n`: number of rows  
- `m`: number of columns  
- `hBars`: vector of removed horizontal bars  
- `vBars`: vector of removed vertical bars  

---

## Output

- Return an integer representing the **maximum area** of a square hole.

---

## Example

### Input
n = 6
m = 6
hBars = [2, 3, 4]
vBars = [3, 4]

### Explanation
- Longest consecutive horizontal bars = 3 → gap = 4
- Longest consecutive vertical bars = 2 → gap = 3
- Square side = min(4, 3) = 3
- Area = 3 × 3 = 9

### Output
9

---

## Constraints

- `1 ≤ n, m ≤ 10^9`
- `1 ≤ hBars.length, vBars.length ≤ 10^5`
- Bar indices are unique



