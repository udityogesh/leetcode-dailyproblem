# Hint for LeetCode 3453 – Separate Squares I

## Key Idea

We want to find a horizontal line `y = mid` such that:

Area above the line = Area below the line

This is a **continuous monotonic function**, which makes it ideal for **binary search**.

---

## Area Contribution of One Square

For a square with:
- bottom = `y`
- top = `y + side`

Cases relative to `mid`:

1. **Fully below the line**
   - Entire area contributes to bottom

2. **Fully above the line**
   - Entire area contributes to top

3. **Intersecting the line**
   - Area below = `(mid - y) * side`
   - Area above = `(y + side - mid) * side`

---

## Binary Search Approach

1. Search space:
   - `low = minimum y of all squares`
   - `high = maximum (y + side)`

2. For each `mid`:
   - Calculate `areaAbove - areaBelow`

3. If `areaAbove > areaBelow`:
   - Move line **up**
4. Else:
   - Move line **down**

5. Continue until precision `1e-6`

---

## Why Binary Search Works

- The difference `(areaAbove - areaBelow)` **decreases monotonically** as `mid` increases
- There is exactly **one balance point**

---

## Time & Space Complexity

- **Time Complexity:** `O(n log range)`
- **Space Complexity:** `O(1)`
