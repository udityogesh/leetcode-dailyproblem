# Hints: Largest Magic Square

## Hint 1

Any single cell is always a valid magic square of size 1.

## Hint 2

Try checking squares by increasing size, starting from 2x2 up to the minimum of rows and columns.

## Hint 3

Precompute prefix sums for:

* Each row
* Each column
* Main diagonals
* Anti-diagonals

This helps you calculate sums in O(1) time.

## Hint 4

For a fixed top-left corner and size `k`, verify:

* All row sums are equal
* All column sums are equal
* Both diagonal sums are equal

## Hint 5

Stop checking larger sizes once it goes out of bounds.

## Hint 6

Brute force works due to small constraints, but prefix sums are required for efficiency.
