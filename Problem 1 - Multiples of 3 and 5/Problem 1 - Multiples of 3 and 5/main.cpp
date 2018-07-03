#include <iostream>
#include "Problem1.h"

using std::cout;
using std::endl;

int main() {
	int result;
	int resultTailRec;
	int resultSeries;
	int tempSum = 0;
	int n = 25; // results should all output 143 = 24+21+20+18+15+12+12+9+6+5+3
	int factor1 = 3, factor2 = 5;

	// Recursion
	result = sumOfMultiple(n, factor1, factor2);
	cout << "Sum of multiples of " << factor1 << " and " << factor2 << " below " << n << ": " << result << endl;

	// Tail Recursion
	resultTailRec = sumOfMultipleTailRec(n, factor1, factor2, tempSum);
	cout << "Sum of multiples of " << factor1 << " and " << factor2 << " below " << n << ": " << resultTailRec << endl;

	// Finite series
	resultSeries = sumOfNumDivisibleBy(n, factor1, factor2);
	cout << "Sum of multiples of " << factor1 << " and " << factor2 << " below " << n << ": " << resultSeries << endl;

	system("pause");
	return 0;
}