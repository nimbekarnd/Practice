# Algorithm Practice

A structured library of algorithm problems, solved in both Python and C++.

## Layout

```
problems/
  <topic>/
    <problem-slug>/
      problem.md        problem statement, examples, constraints, notes
      solution.py        Python solution
      solution.cpp        C++ solution (LeetCode-style, no main())
      run.cpp             local scratch runner, includes solution.cpp + a main()
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

C++: `solution.cpp` has no `main()` (LeetCode's judge supplies its own
driver), so it won't run standalone. Use `run.cpp` instead — it
`#include`s `solution.cpp` and has a `main()` with sample cases:

```
g++ -std=c++17 -o /tmp/run run.cpp && /tmp/run
```

Edit the sample cases in `run.cpp` as needed. Only `solution.cpp` gets
pasted into LeetCode — `run.cpp` is a local-only scratch file.
