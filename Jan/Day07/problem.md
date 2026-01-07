# LeetCode 1339 – Maximum Product of Splitted Binary Tree

## Problem Statement

Given the root of a binary tree, split the tree into two subtrees by removing exactly one edge.

Return the maximum product of the sums of the two resulting subtrees.
Since the answer may be very large, return it modulo `10^9 + 7`.

---

## Example 1

Input:
  1
 / \
2   3
Output:
110

Explanation:
- Total sum = 1 + 2 + 3 + 4 + 5 = 15
- Best split is between node 1 and node 2
- Subtree sums: 11 and 4
- Product = 11 × 4 = 110

---

---

## Constraints

- The number of nodes in the tree is in the range `[2, 5 * 10^4]`
- `1 <= Node.val <= 10^4`

---

## Notes

- Exactly one edge must be removed
- The tree remains connected internally in both parts
- Use modulo `10^9 + 7` for the final answer

