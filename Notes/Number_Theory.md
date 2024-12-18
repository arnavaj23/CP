--------------------------------------

## 1. Modulus Functions

- **Addition**:  
  `(a + b) % m = (a % m + b % m) % m`

- **Subtraction**:  
  `(a - b) % m = (a % m - b % m + m) % m`

- **Multiplication**:  
  `(a * b) % m = (a % m * b % m) % m`

- **Division** (when `m` is prime):  
  `(a / b) % m = (a % m * b^(m-2)) % m`

--------------------------------------
