# LeetCode 1458 – Max Dot Product of Two Subsequences

## Problem Statement

Given two integer arrays `nums1` and `nums2`, return the **maximum dot product** between **non-empty subsequences** of `nums1` and `nums2`.

A subsequence of an array is a new array formed from the original array by deleting some (possibly zero) elements without changing the order of the remaining elements.

The dot product of two arrays of the same length is the sum of the products of their corresponding elements.

---

## Example 1

**Input**
nums1 = [2,1,-2,5]
nums2 = [3,0,-6]
**Output**
18

**Explanation**  
Choose subsequence `[2,5]` from `nums1` and `[3,-6]` from `nums2`.  
Dot product = `2×3 + 5×(-6) = 6 - 30 = -24` 
Better choice is `[2]` and `[3]` → `2×3 = 6`,  
Best is `[2,1,-2,5]` and `[3,0,-6]` → `18`.

---
