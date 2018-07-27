#include <iostream>
#include "Problem4.h"
#include <time.h>
#include <stdio.h>

using std::cout;
using std::endl;

int main() {
	clock_t start = clock();
	cout << "The largest palindrome of the product of two three-digit numbers is: " << generateLargestPalindrome() << endl;
	clock_t stop = clock();
	double elapsed = (double)(stop - start)*1000.0 / CLOCKS_PER_SEC;
	printf("Time elapsed in ms: %f", elapsed);
	system("pause");
	return 0;
}