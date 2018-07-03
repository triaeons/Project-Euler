#pragma once
#ifndef _PROBLEM1_H_
#define _PROBLEM1_H_

/* Purpose: determine if dividend is factor of one number or another number
* @param dividend - the number to factor
* @param divisor1 - the first factor
* @param divisor2 - the other factor
* @return true if dividend is either factor of divisor1 or divisor2
*/
bool isMultiple(int dividend, int divisor1, int divisor2);

// Purpose: return the sum of the multiples of factor1 and factor2 below n
/*@param n - all numbers to check is 1 to n-1
* @param divisor1 - the first factor
* @param divisor2 - the other factor
* @return sum - sum of all multiples of number 1 to n-1
*/
int sumOfMultiple(int n, int factor1, int factor2);

// Tail recursive version of the above
int sumOfMultipleTailRec(int n, int factor1, int factor2, int& tempSum);

// Calculates sum of multiples using finite series and partial sums
int sumOfNumDivisibleBy(int n, int factor1, int factor2);

#endif
