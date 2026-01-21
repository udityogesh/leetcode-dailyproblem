# Hints - LeetCode 3315

1. Observe how the expression works:
x & (x + 1)

2. This operation always **turns off exactly one set bit** in `x`.

3. To reverse this operation:
- Find a bit position `j` where `nums[i]` has a `0`
- The bit just before it (`j - 1`) must be `1` in `x`

4. To get the **minimum possible `x`**:
- Flip the **lowest possible set bit** in `nums[i]` to `0`
- Keep all higher bits unchanged

5. Special case:
- If `nums[i] == 2`, no valid integer can satisfy the condition

6. Stop at the **first unset bit** when scanning from LSB to MSB — this guarantees minimality.
