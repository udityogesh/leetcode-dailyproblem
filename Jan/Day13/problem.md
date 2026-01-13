# 3453. Separate Squares I

## Problem Statement

You are given a 2D plane with several **axis-aligned squares**.  
Each square is represented by three integers:
[x, y, side]

- `(x, y)` represents the **bottom-left corner** of the square
- `side` represents the **length of the square’s side**

Your task is to find a **horizontal line** (parallel to the x-axis) such that:

- The **total area of squares strictly above the line** is equal to
- The **total area of squares strictly below the line**

Squares intersecting the line contribute **partially** to the area on each side.

Return the **y-coordinate** of the horizontal line.

The answer will be accepted if the absolute error is less than `10⁻⁵`.

---

## Example 1

**Input**
squares = [[0,0,2],[1,2,1]]

**Output**
1.00000

---

## Constraints

- `1 <= squares.length <= 5 * 10⁴`
- `0 <= x, y <= 10⁹`
- `1 <= side <= 10⁹`
