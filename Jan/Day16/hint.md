# Hints — Maximum Square Area by Removing Fences

### Hint 1
Don’t forget to include the **boundary fences**:
- Horizontal → `1` and `m`
- Vertical → `1` and `n`

These boundaries are necessary to calculate full possible segments.

---

### Hint 2
A square can be formed **only if**:
- A horizontal gap length exists
- The **same length** exists as a vertical gap

---

### Hint 3
Generate **all possible distances**:
- Between every pair of vertical fences → possible widths
- Between every pair of horizontal fences → possible heights

---

### Hint 4
Store all vertical distances in a set for **fast lookup**.

While calculating horizontal distances, check:
- If the same value exists in the vertical set
- Track the **maximum valid side length**

---

### Hint 5
Final Answer:
- If no common distance exists → return `-1`
- Else return `side × side % (10⁹ + 7)`

---

### Key Observation
You are **not limited to consecutive fences** —  
**any two fences** can define a valid segment after removals.
