#define NDEBUG

#include <iostream>
#include <stddef.h> // for NULL pointer
#include "Problem3.h"


int main() {
	vector<unsigned long long> testFactors;
	vector<unsigned long long>::iterator i;
	unsigned long long n = 600851475143;
	testFactors = getFactors(n);
	cout << "Factors of n: " << endl;
	for (i = testFactors.begin(); i != testFactors.end(); ++i) {
		cout << *i << '\t';
	}

	/* isPrime seems to work fine
	assert(isPrime(1) == true);
	assert(isPrime(2) == true);
	assert(isPrime(4) == false);
	assert(isPrime(13) == true);
	*/

	cout << "Largest prime factor is: " << largestPrimeFactor(testFactors) << endl;

	system("pause");
	return 0;
}