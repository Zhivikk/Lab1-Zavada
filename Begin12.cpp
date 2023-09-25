#include <iostream>
using namespace std;
int main()
{
	// задача Begin12
	// декларація змінних
	double L, S, D, SqrR, R;
	// введення змінної
	cout << "Enter S:";
	cin >> S;
	// розрахунок результату
	SqrR = S / 3.14;
	R = sqrt (SqrR);
	D = R * 2;
	L = 3.14 * D;
	// вивід результату
	cout << "Diameter:" << D << endl;
	cout << "Length:" << L << endl;
	// задача ...
	return 0;
}