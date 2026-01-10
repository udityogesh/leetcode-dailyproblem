
# Hints - LeetCode 712

## Hint 1
Think about **making both strings equal** by deleting characters.
Deleting a character has a **cost (ASCII value)**.

---

## Hint 2
Try Dynamic Programming on prefixes of both strings.

Define:
dp[i][j] = minimum cost to make
s1[0..i-1] and s2[0..j-1] equal

---

## Hint 3
If the current characters are the same:
s1[i-1] == s2[j-1]
You don't need to delete anything.

---

## Hint 4
If characters are different, you have **two choices**:
1. Delete from `s1`
2. Delete from `s2`

Pick the option with **minimum total cost**.

---

## Hint 5
This problem is closely related to **LCS**, but instead of length,
you are optimizing **ASCII sum**.

---

## Hint 6
Initialize base cases carefully:
- One string empty → delete all characters from the other.

