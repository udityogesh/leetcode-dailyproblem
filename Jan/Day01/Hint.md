# Hint – LeetCode 66 (Plus One)

## Core Idea
Addition starts from the **last digit**, just like normal arithmetic.

## Step-by-Step Strategy
- Traverse the array from right to left
- Add `1` to the current digit
- If the digit becomes `10`:
  - Set it to `0`
  - Carry `1` to the next digit on the left
- Stop early if no carry is generated

## Edge Case
- If all digits are `9`, the result will have one extra digit at the front

## Complexity
- Time Complexity: `O(n)`
- Space Complexity: `O(1)` (excluding output)
