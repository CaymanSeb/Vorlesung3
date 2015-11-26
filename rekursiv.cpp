#include "stdafx.h"
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;



int fibonacci_rekursiv(int a) {
	
	if (a == 1 || a == 2) {
		return 1;
	}
	else {
		return fibonacci_rekursiv(a - 1) + fibonacci_rekursiv(a - 2);
	}
}



int main() {

	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	cout << "42. Element der Fibonacci-Reihe (rekursiv berechnet): " << fibonacci_rekursiv(42) << endl;
	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	auto duration = duration_cast<microseconds>(t2 - t1).count();

	cout << duration;
}
