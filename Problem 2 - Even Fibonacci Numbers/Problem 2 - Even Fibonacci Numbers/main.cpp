#include <iostream>
#include <assert.h>
#include "Problem-2.h"

using std::cout;
using std::endl;

int main() {
	
	//unsigned long n = 0;
	unsigned long sum = 0;
	unsigned long sumThirds = 0;
	/*
	unsigned long nthTerm = fibLessThanFourMillion(n, sum);
	cout << "Value of nth term closest to 4000000: " << nthTerm << endl;
	cout << "Value of 33rd term: " << getFibTerm(33) << endl;
	cout << "Value of 32nd term: " << getFibTerm(32) << endl;
	cout << "Answer: " << getFibTerm(33) + getFibTerm(32) << endl;

	//unsigned long result = memoizedFibEven(n-1);
	cout << "Sum of even-valued terms that do not exceed 4000000: " << sum << endl;
	*/

	// Iterative solution
	int a = 1;
	int b = 2;
	while (a <= 4000000) {
		if (a % 2 == 0) {
			sum += a;
		}
		int c = a + b;
		a = b;
		b = c;
	}
	cout << sum << endl;

	// Iteration that avoids testing even numbers by adding only every third number
	int x = 1;
	int y = 1;
	int z = x + y;
	while (z <= 4000000) {
		sumThirds += z;
		x = y + z;
		y = z + x;
		z = x + y;
	}
	cout << sumThirds << endl;
	// 0 1 1 2 3 5 8 13 21 34
	system("pause");
	return 0;
}