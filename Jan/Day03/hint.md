#  Hints – LeetCode 1411  
## Number of Ways to Paint an n × 3 Grid

---

###  Hint 1: Think Row-wise
Instead of painting the entire grid at once, think about painting **one row at a time**.

Ask:
- If I know how the previous row looks, can I count the ways to paint the next row?

---

###  Hint 2: Count Valid Single Rows
List all valid colorings of **one row (1 × 3)**.

You’ll notice:
- Some rows use **three different colors**
- Some rows repeat the **first and third color**

These two patterns are enough.

---

###  Hint 3: Reduce the States
Do not track exact colors.

Track only:
- Pattern `ABA`
- Pattern `ABC`

Count how many ways end in each pattern.

---

###  Hint 4: Transitions Matter
From one row to the next:
- An `ABA` row can form limited `ABA` and `ABC` rows
- An `ABC` row can also form limited `ABA` and `ABC` rows

Try drawing one example row and counting valid next rows.

---

###  Hint 5: Recurrence
Your solution should derive two equations:
- One for new `ABA`
- One for new `ABC`

Only **two variables** are needed.

---

###  Hint 6: Base Case
For the first row:
- Count `ABA` patterns
- Count `ABC` patterns

This initializes your DP.

---

###  Hint 7: Constraints
- `n` can be large → use `O(n)` time
- Apply modulo `10⁹ + 7`

---

###  Final Hint
If your solution:
- Uses only **2 variables**
- Updates them row by row
- Does not store the grid  

👉 You’re solving it optimally 🚀
