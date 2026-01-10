# LeetCode 712 - Minimum ASCII Delete Sum for Two Strings

## Problem Statement
Given two strings `s1` and `s2`, you are allowed to delete characters from either string.

Each deletion costs the **ASCII value** of the deleted character.

Return the **minimum total ASCII delete sum** required to make the two strings equal.

---

##  Example

### Example 1
Input:
s1 = "sea"
s2 = "eat"

Output:
231

### Explanation:
- Delete `'s'` from `s1` → ASCII = 115
- Delete `'t'` from `s2` → ASCII = 116  
- Total cost = `115 + 116 = 231`

---

##  Approach (Dynamic Programming)

We use **2D Dynamic Programming**.

