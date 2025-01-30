# Sorting Algorithm Project

## Project Overview
This project focuses on implementing and comparing various sorting algorithms in C. The goal is to understand their characteristics, strengths, and weaknesses while reinforcing core programming concepts learned so far.

## Objectives
- Implement multiple sorting algorithms (e.g., Bubble Sort, Quick Sort, Merge Sort, etc.).
- Compare their performance based on runtime and memory usage.
- Apply previously learned concepts such as pointers and dynamic memory allocation.
- Practice debugging and optimization techniques.
- Enhance understanding of algorithm complexity (Big O Notation).

## Learning Goals
This project revisits and integrates the following programming topics:
- **Variables and Constants**: Use to define array sizes and loop counters.
- **Operators and Functions**: Implement sorting logic and reusable functions.
- **Control Structures**: Apply loops and conditional statements for sorting operations.
- **Pointers and Arrays**: Manipulate array elements efficiently.
- **Call by Reference**: Pass arrays and pointers to functions.
- **Dynamic Memory Management**: Allocate memory dynamically for large datasets.
- **Program Start Parameters**: Accept sorting options (e.g., algorithm choice) via command-line arguments.
- **Variadic Functions**: Optionally implement a logger for debugging purposes.

## Project template
We do not use a specific (pro.) structure for this project. So we can easily run and debug the project with the extention C/C++ Runner.
Here you can see the graph:
```graph
project-root/
|
├── .vscode/           # VS Code configuration files
|
├── build/             # Compiled files and temporary files (C/C++ Runner)
│   ├── Debug/
│   └── Release/
|
├── tests/             # Test cases
│   ├── small_input.txt
│   ├── large_input.txt
│   └── ...
|
├── .gitignore         # Files and directories to be ignored by git
├── main.c             # Main source file
├── README.md          # Project overview and general information
├── sort1_bubble.c     # Bubble Sort implementation
├── sort2_quick.c      # Quick Sort implementation
├── sort3_merge.c      # Merge Sort implementation
├── ...
├── sorting.h          # Sorting algorithm declaration header file
├──  utils.c           # Utility functions
├──  utils.h           # Utility function declarations
└──
```

## Tasks
1. **Implement Sorting Algorithms**
   - Bubble Sort
   - Quick Sort
   - Merge Sort
   - (Optional) Insertion Sort or Heap Sort

3. **Command-Line Options**
   Allow users to:
   - Select a sorting algorithm.
   - Input the size of the dataset.
   - Provide sorting order (ascending or descending).

4. **Performance Comparison**
   - Measure runtime for each algorithm.
   - Compare memory usage for small, medium, and large datasets.

5. **Test Cases**
   - Create and store test datasets in the `tests/` folder.
   - Validate sorting correctness using automated test scripts.

6. **Documentation**
   - Provide detailed comments and explanations for each function.
   - Include usage instructions in this `README.md`.
