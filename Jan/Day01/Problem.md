# LeetCode 66 – Plus One

## Problem Summary
You are given a large integer represented as an array of digits.
Each element in the array represents a single digit, and the digits
are stored from **most significant to least significant**.

## Task
Increment the number by **one** and return the resulting array of digits.

## Rules
- Each digit is between `0` and `9`
- The number does not contain leading zeros
- The result must also be returned as an array of digits

## Example
Input: `[1, 2, 3]`  
Output: `[1, 2, 4]`

Input: `[9]`  
Output: `[1, 0]`

## Key Challenge
Correctly handling the **carry** when digits are `9`.
