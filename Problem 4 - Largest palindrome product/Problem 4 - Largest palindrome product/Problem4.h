#pragma once
#ifndef _PROBLEM4_H_
#define _PROBLEM4_H_

#include <vector>
#include <algorithm>

using std::vector;

// Determine if number is a palindrome
// @param n - number to inspect
// @return true if number is palindrome, false otherwise
bool isPalindrome(int n);

// Produce all palindromes of the product of two three-digit numbers
//	1. Loop through the range of two three digit numbers
//	2. Multiply two numbers to get product
//	3. Check if product is a palindrome, if yes, append to vector
//	4. Return vector
// @return vector of all palindromes
int generateLargestPalindrome();
#endif