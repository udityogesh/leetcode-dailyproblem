# Largest Magic Square

You are given a **rows x cols** grid of integers.

A **magic square** is a square subgrid where:

* The sum of every row is the same
* The sum of every column is the same
* The sum of the main diagonal is the same
* The sum of the anti-diagonal is the same

Your task is to return the **largest size** of a magic square that can be found in the grid.

---

## Input

* A 2D integer array `grid`

## Output

* An integer representing the maximum side length of any magic square

---

## Constraints

* `1 <= rows, cols <= 50`
* `1 <= grid[i][j] <= 10^6`

---

## Example

**Input**

```
[[7,1,4,5,6],
 [2,5,1,6,4],
 [1,5,4,3,2],
 [1,2,7,3,4]]
```

**Output**

```
3
```

---

## Explanation

The 3x3 subgrid starting at row 1, column 1 is a magic square.

---

## Notes

* A single cell is always a magic square of size 1.
* You need to check all possible square subgrids efficiently.
