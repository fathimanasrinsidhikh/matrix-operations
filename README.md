# Matrix Operations Using 2D Arrays in C

**University Institute of Computing, Chandigarh University**  
**Subject:** C-Programming (`26CAH-101`)  
**Submitted By:** Fathima Nasrin (`26BCD10328`) | **Section:** BCD 4-B  
**Submitted To:** Ms. Kamaldeep Kaur (Professor)

---

## 1. Abstract
This project implements a menu-driven C program to perform fundamental linear algebra operations—**Matrix Addition**, **Matrix Multiplication**, and **Matrix Transpose**—using two-dimensional (2D) arrays. To eliminate local compiler dependencies and automate testing, the source code is hosted on **GitHub** and integrated with a Continuous Integration (CI) workflow via **GitHub Actions**. Every code update automatically compiles `matrix.c` using GCC, passes predefined test cases through standard input redirection, and displays the computed outputs directly in the cloud console.

---

## 2. Project Objectives & Features
* **2D Array Representation:** Stores matrices in statically allocated integer arrays (`int mat[MAX][MAX]`) for $O(1)$ index-based access.
* **Modular Function Design:** Isolates logic into clean, reusable functions (`inputMatrix`, `printMatrix`, `addMatrices`, `multiplyMatrices`, `transposeMatrix`).
* **Mathematical Validation:** Enforces dimension compatibility checks (ensuring identical dimensions for addition and $C_1 = R_2$ for multiplication).
* **Automated Cloud Execution:** Uses GitHub Actions (`ubuntu-latest` runner) to compile and execute the program automatically on every push.

---

## 3. Repository Structure
```text
matrix-operations/
├── .github/
│   └── workflows/
│       └── run.yml        # GitHub Actions CI workflow for compilation & execution
├── matrix.c               # Main C source code for matrix operations
├── input.txt              # Sample input data for automated console execution
└── README.md              # Project documentation and report summary
```

---

## 4. Algorithmic Complexity
| Operation | Function Name | Dimension Requirement | Time Complexity |
| :--- | :--- | :--- | :--- |
| **Matrix Addition** | `addMatrices()` | $R_1 = R_2$ and $C_1 = C_2$ | $O(R 	imes C)$ |
| **Matrix Multiplication** | `multiplyMatrices()` | $C_1 = R_2$ | $O(R_1 	imes C_2 	imes C_1)$ |
| **Matrix Transpose** | `transposeMatrix()` | Any $R 	imes C$ matrix | $O(R 	imes C)$ |

---

## 5. How to Run

### Option A: Automated Execution via GitHub Actions
1. Push changes to `matrix.c` or `input.txt` in this repository.
2. Navigate to the **Actions** tab at the top of the GitHub repository.
3. Click on the latest workflow run (**Compile and Run C Program**) -> **build-and-run**.
4. Expand **Run program and display output** to inspect the console output.

### Option B: Local Compilation (GCC)
```bash
# Compile the source code
gcc matrix.c -o matrix

# Run interactively
./matrix

# Or run using the sample input file
./matrix < input.txt
```

---

## 6. Sample Input & Output

### Test Case: Matrix Multiplication ($2 	imes 2$)
**Input (`input.txt`):**
```text
2
2 2
2 2
1 2
3 4
5 6
7 8
```

**Console Output:**
```text
Matrix Operations using 2D Arrays
1. Addition
2. Multiplication
3. Transpose
Enter your choice (1-3): Enter rows and columns for Matrix A: Enter rows and columns for Matrix B: Enter elements of Matrix A:
Enter elements of Matrix B:

Result of Multiplication:
19	22	
43	50	
```

---

## 7. Summary
This project demonstrates how two-dimensional arrays efficiently solve core matrix manipulation problems in C while maintaining strict mathematical boundary validation. Integrating the codebase with GitHub Actions streamlines compilation, automated testing, and output verification directly in the cloud.
