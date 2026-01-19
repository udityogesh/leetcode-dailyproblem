# Hints for LeetCode 1292

## Hint 1
Brute force checking all square submatrices is too slow because the matrix can be large.

---

## Hint 2
Use a **2D prefix sum array** to compute the sum of any square submatrix in constant time.

---

## Hint 3
The sum of a square with top-left corner `(i, j)` and side length `k` can be calculated using prefix sums.

---

## Hint 4
If a square of side length `k` is possible, then all smaller square sizes are also possible.

---

## Hint 5
Apply **binary search** on the side length from `0` to `min(m, n)` and check feasibility using prefix sums.

---

## Hint 6
Overall time complexity can be reduced to  
`O(m × n × log(min(m, n)))`
