# 🎓 Student Analyser

A simple and interactive **Student Marks Analyzer** built using C++. This project helps analyze student academic performance by calculating total marks, average marks, highest marks, lowest marks, and pass/fail statistics.

It is a beginner-friendly C++ project developed to demonstrate fundamental programming concepts such as functions, arrays, loops, conditional statements, dynamic memory allocation, and user input validation.

## 🚀 Features

- **Student Marks Input:** Enter marks for multiple students.
- **Input Validation:** Accepts marks only between 0 and 100.
- **Total Marks:** Calculates the combined marks of all students.
- **Average Marks:** Calculates the average score.
- **Highest Marks:** Identifies the highest mark obtained.
- **Lowest Marks:** Identifies the lowest mark obtained.
- **Pass Count:** Counts students who scored 40 or above.
- **Fail Count:** Counts students who scored below 40.
- **Run Again Option:** Allows users to analyze another group of students without restarting the program.

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Header File:** `iostream`
- **Concepts Used:**
  - Functions
  - Arrays
  - Loops (`for`, `while`, `do-while`)
  - Conditional Statements (`if`)
  - Dynamic Memory Allocation (`new` and `delete`)
  - User Input and Output
  - Type Casting
  - Input Validation

## 📂 Project Structure

```text
Student_Analyser/
│
├── Student_Analyser.cpp
└── README.md
```

## ⚙️ Installation and Setup

### 1. Clone the Repository

```bash
git clone https://github.com/hyfii77/Student_Analyser.git
```

### 2. Navigate to the Project Folder

```bash
cd Student_Analyser
```

### 3. Compile the Program

Using GCC (g++):

```bash
g++ Student_Analyser.cpp -o Student_Analyser
```

### 4. Run the Program

**Windows:**
```bash
.\Student_Analyser.exe
```

**Linux / macOS:**
```bash
./Student_Analyser
```

## 💻 Sample Output

```text
STUDENT MARKS ANALYZER

Enter number of students (1-100): 5

Enter marks of student 1: 85
Enter marks of student 2: 90
Enter marks of student 3: 35
Enter marks of student 4: 75
Enter marks of student 5: 60

------ STUDENT REPORT ------
Total marks: 345
Average marks: 69
Highest mark: 90
Lowest mark: 35
Passed students: 4
Failed students: 1

Do you want to run again? (Y/N): N

Thank you!
```

## 📊 Passing Criteria

| Marks | Result |
|---|---|
| 40–100 | Pass |
| 0–39 | Fail |

**Note:** The program currently supports a maximum of 100 students, and marks must be between 0 and 100.

## 🎯 Learning Objectives

This project was created to improve practical understanding of C++ programming fundamentals, problem-solving, and logical thinking.

It demonstrates how different functions can work together to process data and generate meaningful results.

## 🔮 Future Improvements

Some features that could be added in future versions:

- Student names and roll numbers.
- Individual student
