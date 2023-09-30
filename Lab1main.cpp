#include <iostream>
using namespace std;
int main()
{
	// задача Begin21. Дано значення кута у градусах. Потрібно знайти значення цього ж кута у радіанах за формулою
	// декларація змінних a, RAD, pi
	double a, RAD;
	const double pinumb = 3.14;
	// введення змінної a
	cout << "Begin21:" <<endl;
	cout << "Enter a:";
	cin >> a;
	// розрахунок результату за формулою
	RAD = (pinumb*a) / 180;
	// вивід результату
	cout << "Radian:" << RAD << endl;
	// задача Begin12 Дано значення площі кола. Потрібно знайти значення діаметру та довжини цього ж кола
    // декларація змінних L, S, D, SqrR, R;
	double L, S, D, SqrR, R;
	// введення змінної S (площі кола)
	cout << "Begin12:" << endl;
	cout << "Enter S:";
	cin >> S;
	// розрахунок результату за формулою
	SqrR = S / pinumb;
	R = sqrt(SqrR);
	D = R * 2;
	L = pinumb * D;
	// вивід результату
	cout << "Diameter:" << D << endl;
	cout << "Length:" << L << endl;
	return 0;
}