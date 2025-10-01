# Recursion in C++

## Aim
To study and implement different **Recursion Programs** in C++.

## Software Required
- Visual Studio / MinGW Compiler  
- Online C++ compiler (e.g., Programiz)

---

## Theory
**Recursion** is a programming technique where a function calls itself directly or indirectly to solve a problem.  
Each recursive solution must have:

1. **Base Case** – Defines when the recursion should stop.  
2. **Recursive Case** – Defines how the problem is broken into smaller subproblems.

Recursion is widely used in problems like factorial, Fibonacci series, string reversal, tree traversal, and backtracking.

---

## Programs and Algorithms

### Program A: Factorial of a Number
**Description:**  
Calculates factorial using recursion. The base case is `n == 0` or `n == 1`. For other values, the function multiplies `n` with `factorial(n-1)`.

**Algorithm:**
1. Start  
2. Read integer `n`  
3. If `n < 0`, print error message and stop  
4. Define recursive function `factorial(n)`  
   - If `n == 0 or n == 1` → return 1  
   - Else → return `n * factorial(n-1)`  
5. Call `factorial(n)` and store result  
6. Display result  
7. End  

---

### Program B: Sum of Natural Numbers
**Description:**  
Calculates the sum of numbers from 1 to `n` using recursion. The base case is `n == 0`. Otherwise, it adds `n + sum(n-1)`.

**Algorithm:**
1. Start  
2. Read integer `n`  
3. If `n < 0`, print error message and stop  
4. Define recursive function `sum(n)`  
   - If `n == 0` → return 0  
   - Else → return `n + sum(n-1)`  
5. Call `sum(n)` and store result  
6. Print the result  
7. End  

---

### Program C: Reverse a String
**Description:**  
Prints a string in reverse order using recursion by starting from the last character and moving backwards.

**Algorithm:**
1. Start  
2. Read string `str`  
3. Define recursive function `printReverse(str, index)`  
   - If `index < 0` → return  
   - Else → print `str[index]` and call `printReverse(str, index-1)`  
4. Call `printReverse(str, str.length()-1)`  
5. End  

---

### Program D: Reverse a Number
**Description:**  
Reverses a given positive integer using recursion. Each step extracts the last digit and builds the reversed number.

**Algorithm:**
1. Start  
2. Read integer `n`  
3. If `n < 0`, print error message and stop  
4. Define recursive function `reverseNumber(n, rev)`  
   - If `n == 0` → return `rev`  
   - Else:  
     - digit = `n % 10`  
     - rev = `rev * 10 + digit`  
     - return `reverseNumber(n/10, rev)`  
5. Call `reverseNumber(n, 0)`  
6. Display result  
7. End  

---

## Conclusion
The above programs demonstrate different uses of **recursion in C++**:  

- **Factorial Calculation** – Demonstrates mathematical recursion.  
- **Sum of Natural Numbers** – Shows cumulative recursion.  
- **Reverse String** – Recursion applied on strings and indices.  
- **Reverse Number** – Numerical recursion using digit extraction.  

These examples show how recursion simplifies problems by breaking them into smaller subproblems until reaching a base case.
