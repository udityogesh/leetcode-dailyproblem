# Hints - LeetCode 3314

1. Observe the expression:
x & (x + 1)

2. This operation clears the **rightmost set bit** of `x`.

3. For a valid `x`:
- `nums[i]` must be **odd**.
- Even numbers (like 2) can never be formed.

4. To get the minimum `x`:
- Try subtracting the **lowest set bit** from `nums[i]`.

5. If the result is non-negative and satisfies the condition, it is valid.
