#include "stdafx.h"
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

int fibonacci_iterativ(int a) {

	int tmp = 0, last1 = 1, last2 = 0;
	for (int i = 1; i < a; i++) {
		tmp = last1 + last2;
		last2 = last1;
		last1 = tmp;
	}
	return tmp;
}

int main() {

	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	cout << "42. Element der Fibonacci-Reihe (iterativ berechnet): " << fibonacci_iterativ(42) << endl;
	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	auto duration = duration_cast<microseconds>(t2 - t1).count();

	cout << duration;

}
