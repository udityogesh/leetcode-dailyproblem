# LeetCode 3314 - Construct the Minimum Bitwise Array I

## Problem Statement

You are given an array `nums` consisting of **prime numbers**.

You need to construct an array `ans` of the same length such that:

- `ans[i] & (ans[i] + 1) == nums[i]`
- `ans[i]` is the **minimum non-negative integer** that satisfies the condition.
- If no such value exists, set `ans[i] = -1`.

Return the array `ans`.

## Constraints

- 1 ≤ nums.length ≤ 100
- 2 ≤ nums[i] ≤ 1000
- All `nums[i]` are prime numbers.

## Example

### Input
nums = [2,3,5,7]

### Output
[-1,1,4,3]

## Explanation

- For `3`: `1 & 2 = 0` , `1 & 2 = 3` → ans = 1
- For `5`: `4 & 5 = 4` , `4 & 5 = 5` → ans = 4
- For `2`: no such number exists → -1
