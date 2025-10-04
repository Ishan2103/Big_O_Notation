# Time Complexity Analysis: Nested Loop Array Pairs

## Aim
To study and analyze the time complexity of a nested loop program that iterates over all pairs of elements in an array.

---

## Theory
- **Big-O notation** expresses how the runtime of an algorithm grows as the input size `n` increases.  
- Nested loops often lead to **quadratic complexity**.  
- In this program:
  - The outer loop iterates over each element of the array.  
  - For every iteration of the outer loop, the inner loop iterates over all elements.  
- Therefore, the total number of iterations grows proportionally to `n × n = n²`.

---

## Algorithm
1. Start.  
2. Initialize an array `array[]` of size `size`.  
3. Loop through each element with index `i` from `0` to `size - 1`.  
4. For each `i`, loop through each element with index `j` from `0` to `size - 1`.  
5. Perform an operation for the pair `(array[i], array[j])`.  
6. Repeat until all nested iterations are complete.  
7. Stop.

---

## Time Complexity
- **Outer loop** runs `n` times.  
- **Inner loop** runs `n` times for each iteration of the outer loop.  
- Total iterations = `n × n = n²`.  
- **Time Complexity: O(n²)**  
- **Space Complexity: O(1)** (no extra storage is used other than loop counters and the array).

---

## Conclusion
This program demonstrates how nested loops result in **quadratic time complexity**.  
It serves as a simple example for understanding Big-O notation in algorithm analysis and the performance impact of nested loops.
