# Hints – LeetCode 865

### Hint 1

What is the **depth** of a node in a binary tree?
Try calculating the maximum depth of left and right subtrees for every node.

---

### Hint 2

Think about how the **Lowest Common Ancestor (LCA)** behaves when multiple deepest nodes exist.

---

### Hint 3

During DFS, return two values from each node:

* Depth of the subtree
* The node that represents the smallest subtree containing all deepest nodes

---

### Hint 4

If the left and right subtree depths are equal, the current node becomes the answer.

---

### Hint 5

If one subtree is deeper than the other, the answer lies in the deeper subtree.
