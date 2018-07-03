#include <iostream>
#include "Problem1.h"
using std::cout;

bool isMultiple(int dividend, int divisor1, int divisor2) {
	if (dividend%divisor1 == 0 || dividend % divisor2 == 0)
		return true;
	else return false;
}

int sumOfMultiple(int n, int factor1, int factor2) {
	int sum = n - 1;
	if (sum <= 0) return 0;

	if (isMultiple(sum, factor1, factor2)) {
		sum = sum + sumOfMultiple(sum, factor1, factor2);
	}
	else
		return sumOfMultiple(sum, factor1, factor2);
}

int sumOfMultipleTailRec(int n, int factor1, int factor2, int& tempSum) {
	n--;
	if (n <= 0) {
		return tempSum;
	}

	if (isMultiple(n, factor1, factor2)) {
		tempSum += n;
		return sumOfMultipleTailRec(n, factor1, factor2, tempSum);
	}
	else
		return sumOfMultipleTailRec(n, factor1, factor2, tempSum);
}

int sumOfNumDivisibleBy(int n, int factor1, int factor2) {
	n--;
	int a = n / factor1;	// 3+6+9+...+999 = factor1(1+2+...+n/factor1)
	int b = n / factor2;	// 5+10+15+...995 = factor2(1+2+...+n/factor2)
	int factor3 = factor1 * factor2;	// to eliminate terms that are common in the series of factor1 and series of factor2
	int c = n / factor3;

	int resultFactor1 = factor1 * (a*(a + 1) / 2);
	int resultFactor2 = factor2 * (b*(b + 1) / 2);
	int resultFactor3 = factor3 * (c*(c + 1) / 2);

	return resultFactor1 + resultFactor2 - resultFactor3;
}