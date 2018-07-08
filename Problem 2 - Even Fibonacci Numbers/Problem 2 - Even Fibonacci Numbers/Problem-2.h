/* Problem 2 - Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting
* with 1 and 2, the first 10 terms will be:
*			1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
* By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum
* of the even-valued terms.
*
* Theory (from CPSC221)
* The Fibonacci numbers are recursively defined as:
*			F(0) = 0*F(1) = 1*F(n) = F(n-1) + F(n-2)
*
*/
#pragma once
#ifndef _PROBLEM2_H_
#define _PROBLEM2_H_

/* Purpose: compute the nth term of the Fibonacci sequence that starts with 1 and 2 (zeroth term is 0)
* @param n - the term to get
* @return the nth term
*/
unsigned long getFibTerm(unsigned long n);

// Memoized version of the above
unsigned long memoizedFib(unsigned long n, unsigned long &sum);

// Find sum of terms in Fibonacci that are <= 4 000 000 and even
unsigned long memoizedFibEven(unsigned long n);

// Find sum of terms in Fibonacci that are <= 4 000 000 and even
unsigned long fibLessThanFourMillion(unsigned long &n, unsigned long &sum);

/*Purpose: determine if a is less than b*/
bool lessThan(unsigned long a, unsigned long b);

/* Purpose: determine if number is even*/
bool isEven(int n);

/* Purpose: determine if a is both less than b and even*/
bool bothEvenLessThan(unsigned long a, unsigned long b);

#endif