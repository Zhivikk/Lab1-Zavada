#include <iostream>
using namespace std;
int main()
{
	// ������ Begin12
	// ���������� ������
	double L, S, D, SqrR, R;
	// �������� �����
	cout << "Enter S:";
	cin >> S;
	// ���������� ����������
	SqrR = S / 3.14;
	R = sqrt (SqrR);
	D = R * 2;
	L = 3.14 * D;
	// ���� ����������
	cout << "Diameter:" << D << endl;
	cout << "Length:" << L << endl;
	// ������ ...
	return 0;
}