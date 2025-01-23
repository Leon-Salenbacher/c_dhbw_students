# Exercise: Dynamic Array in C

## **Task**
Write a C program to create a dynamic array that:
1. Accepts the number of elements (`n`) from the user. Ensure `n` is validated to be a positive integer.
2. Dynamically allocates memory for `n` integers using `malloc`. The program should check if `malloc` returns `NULL` to handle allocation failures and provide an appropriate error message.
3. Fills the array with user-provided values.
4. Calculates and prints the sum of all elements in the array.
5. Frees the allocated memory to prevent memory leaks.

---

## **Requirements**
1. Use dynamic memory allocation (`malloc` or `calloc`) for creating the array.
2. Ensure that you free the allocated memory using `free` to prevent memory leaks.
3. The program should handle invalid user inputs (e.g., non-positive values for `n`).
4. Validate if memory allocation succeeds and provide an error message if `malloc` returns `NULL`.
5. Include comments to explain each step of your program.

---

## **Example Output**
### **Example 1:**
```
Enter the number of elements: 5
Enter 5 integers:
1 2 3 4 5
The sum of the array elements is: 15
```

### **Example 2:**
```
Enter the number of elements: -2
Invalid input! The number of elements must be greater than zero.
```

### **Example 3:**
```
Enter the number of elements: 3
Memory allocation failed!
```