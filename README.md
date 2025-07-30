# 💻 Experiment 4: Exploring C++ Bitwise Operators

## 🎯 Aim

1. To understand and use basic bitwise operators in C++
2. To implement logic for setting and clearing specific bits of a given integer

---

## 🛠️ Tool Used

- Visual Studio Code

---

## 📌 Learning Objectives

- Apply bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`)
- Learn how to activate (set) and deactivate (clear) specific bits using shifts and bitwise logic

---

## 📚 Theory

### 🔍 What Are Bitwise Operators?

Bitwise operators allow direct manipulation of bits (0s and 1s) in integer data types. These are particularly useful for low-level programming tasks and memory-efficient operations.

They are frequently used in:

- Embedded systems programming  
- Data compression and cryptography  
- Flag-based condition handling  
- Image and signal processing  
- Operating system and hardware control

| Operator    | Symbol | Functionality                                      |
|-------------|--------|----------------------------------------------------|
| AND         | `&`    | Bit is 1 only if both corresponding bits are 1     |
| OR          | `\|`   | Bit is 1 if at least one bit is 1                  |
| XOR         | `^`    | Bit is 1 if exactly one of the bits is 1           |
| NOT         | `~`    | Inverts all bits (1 becomes 0, 0 becomes 1)        |
| Left Shift  | `<<`   | Shifts bits to the left (multiplies by 2 each shift) |
| Right Shift | `>>`   | Shifts bits to the right (divides by 2 each shift)  |

---

### 🧠 Why Are Bitwise Operators Useful?

- **Faster Execution**  
  - Bitwise operations are executed faster than arithmetic ones
- **Compact Data Storage**  
  - Multiple boolean values can be stored in a single variable
- **Precise Control**  
  - Directly manage hardware, registers, permissions, flags, etc.
- **Shift Optimization**  
  - Multiplication and division by powers of 2 can be achieved via shifts

---

### 🔧 Setting and Clearing Specific Bits

### ✅ Setting a Specific Bit

To **set** a bit at a particular position (i.e., make it `1`), we use the **bitwise OR** operator with a mask.

- `(1 << bitPosition)` creates a binary mask where only the bit at the specified position is `1`.
- Using the `|` operator with this mask ensures the target bit becomes `1`, while all other bits remain unchanged.

#### 📌 Example

```cpp
int number = 10;       // Binary: 00001010
int position = 2;
int result = number | (1 << position);  // Set bit at index 2
// Result: 14 -> Binary: 00001110
```
### ❌ Clearing (Resetting) a Specific Bit

To **clear** a specific bit (i.e., make it `0`), use the **bitwise AND** operator with the complement of a mask.

- `(1 << bitPosition)` creates a mask with a `1` at the desired bit position.
- `~(1 << bitPosition)` inverts that mask — all bits are `1` except the target bit, which becomes `0`.
- Using `&` with this inverted mask ensures only that bit is turned off, and all others remain unchanged.

#### 📌 Example

```cpp
int number = 58;       // Binary: 00111010
int position = 4;
int result = number & ~(1 << position);  // Clear bit at index 4
// Result: 42 -> Binary: 00101010
```
---

## 📝 Program Description

### Part 1: Bitwise Operation Demo
- Take two integers from the user
- Perform AND, OR, XOR, NOT, Left Shift, Right Shift on them
- Display results in decimal form

### Part 2: Bit Manipulation
- User inputs a number and a bit position to **set** a bit
- Another number and position is taken to **clear** a bit
- The modified numbers are displayed

---

## 🧮 Concepts Applied

- Bitwise logic and masking
- Bit shifts
- Binary manipulation techniques for optimization

---
## 🧾 Sample Output
```cpp

Enter 2 numbers :
12
25
AND: 8
XOR: 21
OR : 29
Left Shift (x << 2): 48
Right Shift (x >> 2): 3
NOT (~x): -13

Enter a number to perform SET operation:
10
Enter the bit position to set (0-indexed):
3
Result after setting bit 3: 10

Enter a number to perform RESET operation:
58
Enter the bit position to reset (0-indexed):
4
Result after resetting bit 4: 42
```

