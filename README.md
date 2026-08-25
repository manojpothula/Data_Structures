# data-structures-cpp

Data structures and algorithm solutions in C++ — organized by topic (strings, graph, dynamic programming, two-pointer).

Overview
A curated collection of algorithm solutions and data structure implementations in C++. Each file contains a single problem solution with comments and sample input/output when applicable. Useful for interview preparation and demonstrating algorithmic competency.

Features
- Topic-based organization: strings, Graph, Dynamic Programming, Two_Pointer, Heaps, ...
- Each problem contains a short comment with problem statement / source when available.

Tech stack
- C++ (recommended compiler: g++ >= 9)
- Build: simple g++ commands or optional Makefile

Repository structure
- /Dynamic_Programming/ — dynamic programming problems
- /Graph/ — graph algorithms (Kruskal, Dijkstra, BFS/DFS)
- /strings/ — string manipulation problems
- /Two_Pointer/ — two-pointer technique problems

Setup & Build
Option 1 — compile a single file directly:

  g++ -std=c++17 Dynamic_Programming/House_Robber.cpp -O2 -o house_robber
  ./house_robber

Option 2 — use the provided Makefile to compile and run a single problem (recommended):

  make run problem=Dynamic_Programming/House_Robber.cpp

Usage
- Each file includes sample input/output or prints results for example cases. See the top of each file for usage notes.

Testing
- (Optional) Add unit tests using GoogleTest / Catch2. Recommended: a small test suite that validates outputs against known cases.

Contributing
- Add problem files under the relevant topic folder. Use clear filenames and include a comment with the problem source and complexity where possible.

Future improvements
- Add CMake support and a test runner (GoogleTest).
- Add README per topic with list of problems and difficulty tags.
- Provide a small script to run selected problems.

License
- Add a LICENSE file (e.g., MIT) if you want to publish these examples under an open license.
