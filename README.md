# ✨ Polynomial Evaluator in C

This project is a **C program that evaluates a polynomial equation for a given value of x**.  
It allows the user to enter the degree of the polynomial, its coefficients, and then calculates the result using the `pow` function from `<math.h>`.

---

## 📌 Features
- Reads:
  - Degree of the polynomial.
  - Polynomial coefficients.
  - Value of `x` to evaluate.
- Prints the **polynomial equation** in readable format.
- Evaluates the polynomial result at the given `x`.
- Uses **dynamic memory allocation** for coefficients.
- Supports polynomials of arbitrary degree.

---

## ⚙️ How It Works
1. User enters the polynomial degree (`n`).  
2. Program dynamically allocates memory for `n + 1` coefficients.  
3. User inputs the coefficients, starting from the highest power term down to the constant.  
4. Program:
   - Prints the polynomial equation.
   - Evaluates it for the given `x` using `pow(x, exponent)`.
5. Prints the final result.

---

## 🚀 Compilation & Execution

### Compile
```bash
gcc polynomial.c -o polynomial -lm
