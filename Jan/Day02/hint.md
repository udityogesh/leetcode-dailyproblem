# Hint – LeetCode 961

## Observation
- Since one element appears `N` times in an array of size `2N`,
  duplicates must appear **very close to each other**.

## Simple Approach
- Use a hash set
- Traverse the array
- The first element that already exists in the set is the answer

## Optimized Insight
- You can check only nearby elements
- Compare `nums[i]` with `nums[i+1]`, `nums[i+2]`, or `nums[i+3]`
- A match will always occur within this range

## Complexity
- Time Complexity: `O(n)`
- Space Complexity:
  - `O(n)` using hash set
  - `O(1)` using optimized comparison
