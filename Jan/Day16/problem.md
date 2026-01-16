# LeetCode 2975 — Maximum Square Area by Removing Fences From a Field

## Problem Statement

You are given a rectangular field of size `m × n`.

- There are some **horizontal fences** at positions given in array `hFences`
- There are some **vertical fences** at positions given in array `vFences`
- You are allowed to **remove any number of fences**

After removing fences, the field is divided into smaller rectangular regions.

### Task  
Find the **maximum possible area of a square** that can be formed after removing fences.  
If it is **not possible to form a square**, return `-1`.

Since the result can be large, return the answer modulo **10⁹ + 7**.

---

## Input
- `m` — height of the field
- `n` — width of the field
- `hFences` — positions of horizontal fences
- `vFences` — positions of vertical fences

---

## Output
- Maximum square area modulo `10⁹ + 7`
- `-1` if no square can be formed

---

## Example

Input:
m = 5, n = 8
hFences = [2, 4]
vFences = [3]

Output:
9

---

## Constraints
- `1 ≤ m, n ≤ 10⁹`
- `1 ≤ hFences.length, vFences.length ≤ 1000`
- Fence positions are unique
