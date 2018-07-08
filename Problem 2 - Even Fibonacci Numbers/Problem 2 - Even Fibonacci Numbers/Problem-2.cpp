#include <iostream>
#include <map>
#include "Problem-2.h"

using std::map;
using std::cout;
using std::endl;

bool isEven(int n) {
	return n % 2 == 0;
}

unsigned long getFibTerm(unsigned long n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		unsigned long result;
		result = getFibTerm(n - 1) + getFibTerm(n - 2);
		return result;
	}
}

unsigned long memoizedFib(unsigned long n, unsigned long &sum) {
	static map<unsigned long, unsigned long> memo = { {0,0}, {1,1} };
	auto lookup = memo.find(n);
	if (lookup != memo.end()) {
		if (lookup->second % 2 == 0) {
			sum += lookup->second;	// nth term is even, so add to total sum
		}
		return lookup->second; // n found in memo
	}
	else {
		unsigned long result;
		result = memoizedFib(n - 1, sum) + memoizedFib(n - 2, sum);
		memo[n] = result;
		return result;
	}
}

bool lessThan(unsigned long a, unsigned long b) {
	return a < b;
}

bool bothEvenLessThan(unsigned long a, unsigned long b) {
	return (lessThan(a, b) && isEven(a));
}

unsigned long fibLessThanFourMillion(unsigned long &n, unsigned long &sum) {
	// Find the nth term that is closest to 4 000 000
	// ex. if n = 5, 2 + 4 + 6 + 8 + 10 = 30
	/*unsigned long fibTerm = 0;
	while (fibTerm <= 4000000) {
		fibTerm = memoizedFib(n);
		n++;
	}
	return fibTerm;
	*/
	if (memoizedFib(n, sum) > 4000000) {
		//cout << "Term in sequence closest to and under 4000000: " << (n-1) << endl;
		return memoizedFib(n - 1, sum);
	}
	else {
		n++;
		return fibLessThanFourMillion(n, sum);
	}
}

unsigned long memoizedFibEven(unsigned long n) {
	static map<unsigned long, unsigned long> memoEven = { { 0,0 },{ 1,1 } };
	auto lookup = memoEven.find(n);
	if (lookup != memoEven.end()) {
		if ((lookup->second) % 2 == 0) {
			return lookup->second; // n found in memo
		}
		else {
			return 0;
		}
	}
	else {
		unsigned long result;
		result = memoizedFibEven(n - 1) + memoizedFibEven(n - 2);
		memoEven[n] = result;
		return result;
	}
}