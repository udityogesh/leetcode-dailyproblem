# Hint - LeetCode 1390 (Four Divisors)

## Key Observations

1. A number can have exactly four divisors only in very specific cases.
2. While checking divisors, you only need to iterate up to `√n`.

---

## Efficient Strategy

- For each number `n`:
  - Loop `i` from `1` to `i * i ≤ n`
  - If `i` divides `n`:
    - If `i * i == n`, it contributes **one divisor**
    - Otherwise, it contributes **two divisors** (`i` and `n / i`)
  - Keep track of:
    - Total divisor count
    - Sum of divisors
  - Stop early if divisor count exceeds 4

---

## Important Detail

- Use `i * i == n` to detect perfect squares.
- Do not compare with `0`.
- If total divisor count becomes more than 4, further checking is unnecessary.

---

## Final Check

- If the divisor count is exactly 4, add the sum to the answer.
- Otherwise, ignore the number.

---

## Time Complexity

- For each number: `O(√n)`
- Overall: Efficient for given constraints
