# 1266. Minimum Time Visiting All Points

## Problem Statement

On a 2D plane, there are `n` points with integer coordinates `points[i] = [xi, yi]`.

You are given an array `points` where `points[i]` represents the coordinates of the `i-th` point.

You need to visit all the points in the given order. You can move according to the following rules:

- In one second, you can move:
  - Vertically by 1 unit
  - Horizontally by 1 unit
  - Diagonally by 1 unit (both x and y change by 1)

Return the **minimum time** required to visit all the points.

---

## Example 1

**Input**
points = [[1,1],[3,4],[-1,0]]

**Output**
7

**Explanation**

- From (1,1) to (3,4):  
  Time = max(|3-1|, |4-1|) = max(2, 3) = 3  
- From (3,4) to (-1,0):  
  Time = max(|-1-3|, |0-4|) = max(4, 4) = 4  

Total time = 3 + 4 = 7

---

## Example 2

**Input**
points = [[3,2],[-2,2]]

**Output**
5

---

## Constraints

- `points.length >= 1`
- `points[i].length == 2`
- `-1000 <= xi, yi <= 1000`
