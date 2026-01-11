# Hints for Maximal Rectangle

## Hint 1: Reduce the Problem

Think about how you would solve the problem if it were **one row only**.

That reduces to:
> Largest Rectangle in Histogram

---

## Hint 2: Histogram Technique

For each row:
- Treat it as the base of a histogram
- If the cell is `'1'`, increase height
- If the cell is `'0'`, reset height to `0`

---

## Hint 3: Use Monotonic Stack

To find the maximum area in a histogram:
- Find **Nearest Smaller to Left (NSL)**
- Find **Nearest Smaller to Right (NSR)**

These help calculate the width:
width = NSR[i] - NSL[i] - 1

---

## Hint 4: Area Formula

For each bar:
area = height[i] × width[i]

Track the maximum area across all rows.

---

## Hint 5: Optimization

- Use stacks to compute NSL and NSR in `O(n)`
- Overall complexity becomes `O(rows × cols)`

---

## Final Thought

If you can solve **Largest Rectangle in Histogram**,  
you can solve **Maximal Rectangle** by repeating it row by row.

