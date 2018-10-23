# Project Euler: Math and Coding Problems

## Sln files produced with Visual Studio
* [Problem 1](https://projecteuler.net/problem=1) - Multiples of 3 and 5: contains solutions using recursion, tail recursion, and calculating finite series. One can check https://adamdrake.com/an-unreasonably-deep-dive-into-project-euler-problem-1.html for explanations on performance and finite series.

* [Problem 2](https://projecteuler.net/problem=2) - Even Fibonacci numbers: main.cpp contains iterative solution in addition to solution that solves the problem by adding only                 every third term in the Fibonacci sequence (which are the even numbers if we start with 1, 1, 2, ...). (Memoized) Recursive                 solutions are incomplete, as they calculate the sum of even numbers in the sequence incorrectly and are found in Problem2.h                 and Problem2.cpp.

* [Problem 3](https://projecteuler.net/problem=3) - Largest prime factor: we can find all factors of a number (seeing if n mod i = 0) by iterating up to the square root of n. Since factors are always paired, i is one factor and n/i is the other factor. We then iterate again through the list of factors to find the largest prime.

* [Problem 4](https://projecteuler.net/problem=4) - Largest palindrome product: to determine palindromidity, in a loop, use n%/10 to create a mirror variable (original number flipped) one digit at a time. Use n/10 to reduce digits of original once it has been added to mirror. Check is original is same as mirror. For generating products, we can use a double loop where j is initialized to i to reduce number of operations and produce unique products.
