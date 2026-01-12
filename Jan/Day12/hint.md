# Hint for LeetCode 1266

## Key Observation

From one point `(x1, y1)` to another `(x2, y2)`:

- Horizontal moves needed = `|x2 - x1|`
- Vertical moves needed = `|y2 - y1|`
- Since diagonal movement is allowed, you can reduce both x and y in one second.

Therefore, the **minimum time** required to move between two points is:

max(|x2 - x1|, |y2 - y1|)

---

## Approach

1. Initialize `totalTime = 0`
2. Iterate from `i = 1` to `points.length - 1`
3. For each consecutive pair of points:
   - Compute `dx = abs(x2 - x1)`
   - Compute `dy = abs(y2 - y1)`
   - Add `max(dx, dy)` to `totalTime`
4. Return `totalTime`

---

## Why This Works

Diagonal moves let you reduce both x and y simultaneously.  
Once one coordinate matches, the remaining distance must be covered by straight moves.

This greedy calculation always gives the minimum time.

---

## Time & Space Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
