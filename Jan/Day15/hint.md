# Hints for Maximize Area of Square Hole in Grid

## Key Observations

1. Removing `k` consecutive bars creates a gap of size `k + 1`.
2. To form a square, the side length is limited by:
   - the largest horizontal gap
   - the largest vertical gap
3. The maximum square side is:
4. min(maxHorizontalGap, maxVerticalGap)


---

## How to Find Maximum Gap

1. Sort the bar indices.
2. Traverse the array to find the longest sequence of consecutive numbers.
3. If the longest consecutive sequence length is `k`,
then the gap size is `k + 1`.

---

## Final Formula
side = min(maxConsecutiveHBars, maxConsecutiveVBars) + 1
area = side × side

---

## Common Mistake

- Using the **current** consecutive count instead of the **maximum** consecutive count.
- Always use the maximum streak found in the entire array.

---

## Time Complexity

- Sorting: `O(n log n)`
- Traversal: `O(n)`
- Overall: `O(n log n)`


