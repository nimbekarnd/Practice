# Algorithm Practice

A structured library of algorithm problems, solved in both Python and C++.

## Layout

```
problems/
  <topic>/
    <problem-slug>/
      problem.md        problem statement, examples, constraints, notes
      solution.py        Python solution
      solution.cpp        C++ solution
      test_solution.py     pytest tests
  _template/           starter files for a new problem
```

Topics so far: `arrays-strings`, `trees-graphs`, `dynamic-programming`.
Add new topic folders as needed.

## Adding a new problem

1. Copy `problems/_template/` to `problems/<topic>/<problem-slug>/`.
2. Paste the LeetCode statement into `problem.md`.
3. Write your attempt in `solution.py` / `solution.cpp` (ask for help/review
   any time — hints, complexity checks, edge cases, or a full solution walk-through).
4. Fill in `test_solution.py` with the example cases (and edge cases).

## Running tests

Python (from a problem folder):

```
python -m pytest
```

C++ (compile and run manually, e.g.):

```
g++ -std=c++17 -o /tmp/sol solution.cpp && /tmp/sol
```
