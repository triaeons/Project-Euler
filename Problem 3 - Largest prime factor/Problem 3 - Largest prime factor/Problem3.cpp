#include <iostream>
#include <stddef.h>
#include <vector>
#include "Problem3.h"


using std::cout;
using std::endl;
using std::vector;

vector<unsigned long long> getFactors(unsigned long long n) {
	vector<unsigned long long> listOfFactors;
	for (unsigned long long i = 1; i < (sqrt(n)) + 1; i++) {
		if (n%i == 0) {
			listOfFactors.push_back(i);
			listOfFactors.push_back(n / i);
		}
	}
	return listOfFactors;
}

bool isPrime(unsigned long long n) {
	return getFactors(n).size() == 2;
}

unsigned long long largestPrimeFactor(vector<unsigned long long> factors) {
	unsigned long long largestPrimeFactor = 0;
	vector<unsigned long long>::iterator i;
	for (i = factors.begin(); i != factors.end(); ++i) {
		if (isPrime(*i) && (*i > largestPrimeFactor)) {
			largestPrimeFactor = *i;
		}
	}
	return largestPrimeFactor;
}