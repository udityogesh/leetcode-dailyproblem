# LeetCode 1161 – Maximum Level Sum of a Binary Tree

## Problem Statement

Given the root of a binary tree, return the level (1-indexed) that has the maximum sum of its node values.

If there are multiple levels with the same maximum sum, return the smallest level number.

---

## Example 1

Input:
    1
   / \
  7   0
 / \
7  -8

Output:
2

Explanation:
- Level 1 sum = 1
- Level 2 sum = 7 + 0 = 7
- Level 3 sum = 7 + (-8) = -1  
Maximum sum is at level 2.

---

## Example 2

Input:
    989
     \
     10250
       \
        98693
Output:
3

---

## Constraints

- The number of nodes in the tree is in the range `[1, 10^4]`
- `-10^5 <= Node.val <= 10^5`

---

## Notes

- Levels are counted starting from 1
- If two levels have the same sum, choose the smaller level number





