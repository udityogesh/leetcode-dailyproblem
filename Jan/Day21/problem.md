# LeetCode 3315 - Construct the Minimum Bitwise Array II

## Problem Statement

You are given an integer array `nums`.

Your task is to construct another integer array `result` of the same length such that for every index `i`:

- `result[i] & (result[i] + 1) == nums[i]`
- `result[i]` is the **minimum possible non-negative integer** satisfying the condition
- If no such integer exists, set `result[i] = -1`

Return the array `result`.

---

## Bitwise Property

For any integer `x`:

x & (x + 1)

This operation **removes the lowest set bit** of `x`.

---

## Constraints

- 1 ≤ nums.length ≤ 2 × 10⁵
- 0 ≤ nums[i] ≤ 10⁹

---

## Example

### Input
nums = [2, 3, 4, 5]

### Output
[-1, 1, 5, 4]

---

## Explanation

- `2` → no valid value exists → `-1`
- `3` → `1 & 2 = 2` , `1 & 2 = 3` 
- `4` → `5 & 6 = 4`
- `5` → `4 & 5 = 4` , `4 & 5 = 5` 

The minimum valid value is chosen for each position.
