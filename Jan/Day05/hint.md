# Hints – Maximum Matrix Sum

## Hint 1
Since you can flip **any adjacent pair**, the parity (odd or even) of negative numbers in the matrix matters more than their positions.

## Hint 2
If the total number of negative elements is even, you can make **all elements positive**.

## Hint 3
If the number of negative elements is odd, **one element must remain negative**.

## Hint 4
To maximize the sum in that case, keep the element with the **minimum absolute value** negative.

## Hint 5
Try computing:
- Total sum of absolute values
- Count of negative numbers
- Minimum absolute value in the matrix
