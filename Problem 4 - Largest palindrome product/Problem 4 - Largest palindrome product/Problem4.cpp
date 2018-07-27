#include "Problem4.h"
#include <iostream>


using std::cout;
using std::endl;

bool isPalindrome(int n) {
	int original = n;
	int mirror = 0;
	while (n) {
		mirror = mirror * 10 + (n % 10);
		n = n / 10;
	}
	return mirror == original;
}

int generateLargestPalindrome() {
	vector<int> listOfPalindromes;
	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			if (isPalindrome(i*j)) {
				listOfPalindromes.push_back(i*j);
			}
		}
	}
	return  *max_element(listOfPalindromes.begin(), listOfPalindromes.end());
}