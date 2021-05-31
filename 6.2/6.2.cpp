#include "Array.h"
#include <iostream>
#include <time.h>
#include <stdexcept>
#include <exception>
#include <cmath>
using namespace std;
typedef Array::value_type* TArray;
int main()
{
	int n;
	cout << "n= "; cin >> n;
	Array a = Array(n);
	Array b = Array(n);
	Array c = Array(n);
	Array d = Array(n);
	cin >> a;
	cout << a;
	cin >> b;
	cout << b;
	cout << a;
	c = a + b;
	cout << c;
	d = c * b;
	cout << d;
	cin.get();
	return 0;
}