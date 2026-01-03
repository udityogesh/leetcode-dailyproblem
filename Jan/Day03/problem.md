#  LeetCode 1411 – Number of Ways to Paint an n × 3 Grid

##  Problem Statement
You are given an integer **n**. You need to paint an **n × 3 grid** using **3 different colors** such that:

- No two adjacent cells in the **same row** have the same color
- No two adjacent cells in the **same column** have the same color

Return the **number of valid ways** to paint the grid.

Since the answer can be large, return it modulo **10⁹ + 7**.

---

##  Key Observation

Each row of the grid can have **only two valid patterns**:

### 1️ `ABA` Pattern (Same)
- First and third cells have the same color
- Middle cell has a different color


