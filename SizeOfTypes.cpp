//============================================================================
// Name        : Study.cpp
// Author      : Kirteekumar
// Version     :
// Copyright   :
// Description : size of various types in C++ , Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "-- size of various types --" << endl;

	cout <<  "size of bool           : " << sizeof(bool)        << endl;
	cout <<  "size of char           : " << sizeof(char)        << endl;
	cout <<  "size of short          : " << sizeof(short)       << endl;
	cout <<  "size of int            : " << sizeof(int)         << endl;
	cout <<  "size of long           : " << sizeof(long)        << endl;
	cout <<  "size of long long      : " << sizeof(long long)   << endl;
	cout <<  "size of float          : " << sizeof(float)       << endl;
	cout <<  "size of double         : " << sizeof(double)      << endl;
	cout <<  "size of long double    : " << sizeof(long double) << endl;

	return 0;
}

