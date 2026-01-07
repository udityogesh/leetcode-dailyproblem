# Hints for LeetCode 1339

1. First, compute the total sum of all nodes in the tree.
2. Use DFS to calculate the sum of every subtree.
3. For each subtree, consider splitting it from its parent.
4. The product for a split is:
   subtree_sum × (total_sum - subtree_sum)
5. Track the maximum product across all possible splits.
6. Return the maximum product modulo 10^9 + 7.
