# Hints – LeetCode 1458

## Hint 1
This problem cannot be solved using greedy methods because skipping or taking elements affects future choices.

---

## Hint 2
Think in terms of **Dynamic Programming**.

Define:
dp[i][j] = maximum dot product using non-empty subsequences
from nums1[0..i-1] and nums2[0..j-1]

---

## Hint 3
At each position `(i, j)`, you have four choices:
1. Start a new subsequence using `nums1[i-1] * nums2[j-1]`
2. Extend a previous subsequence
3. Skip `nums1[i-1]`
4. Skip `nums2[j-1]`

Take the **maximum** of all possibilities.

---

## Hint 4
Initialize DP values with a **very small negative number** to ensure at least one pair is chosen (non-empty subsequence).

---

## Hint 5
Final answer will be stored in:
dp[n][m]
