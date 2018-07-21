#pragma once
#ifndef _PROBLEM3_H_
#define _PROBLEM3_H_

#include <iostream>
#include <vector>
#include <assert.h>

using std::cout;
using std::endl;
using std::vector;

// Get the factors of a number
// @param n - the number to find factors for
// @return pointer to array of factors
vector<unsigned long long> getFactors(unsigned long long n);


// Determines if a number is prime
// @param n - the number to determine primeness
// @return true if number is prime, false otherwise
bool isPrime(unsigned long long n);

// Find the largest prime factor from list of prime factors
// @param factors - list of factors of a number
// @return the largest prime factor
unsigned long long largestPrimeFactor(vector<unsigned long long> factors);
#endif