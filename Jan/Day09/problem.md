# LeetCode 865 – Smallest Subtree with all the Deepest Nodes

## Problem Statement

You are given the `root` of a binary tree.

The **depth** of a node is defined as the number of edges from the root to that node.

The **deepest nodes** are the nodes with the maximum depth in the tree.

Return the **smallest subtree** such that it contains **all the deepest nodes**.

A subtree of a node is a tree consisting of that node and all of its descendants.

---

## Examples

### Example 1

```
Input:  [3,5,1,6,2,0,8,null,null,7,4]
Output: [2,7,4]
```

### Example 2

```
Input:  [1]
Output: [1]
```

### Example 3

```
Input:  [0,1,3,null,2]
Output: [2]
```

---

## Constraints

* The number of nodes in the tree is in the range `[1, 500]`
* `0 <= Node.val <= 500`
* All node values are unique

---

## Notes

* If there is only one deepest node, return that node.
* If multiple deepest nodes exist, return their lowest common ancestor.
