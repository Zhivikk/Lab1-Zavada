#include <iostream>
using namespace std;
int main()
{
	// ������ Begin21. ���� �������� ���� � ��������. ������� ������ �������� ����� � ���� � ������� �� ��������
	// ���������� ������ a, RAD, pi
	double a, RAD;
	const double pinumb = 3.14;
	// �������� ����� a
	cout << "Begin21:" <<endl;
	cout << "Enter a:";
	cin >> a;
	// ���������� ���������� �� ��������
	RAD = (pinumb*a) / 180;
	// ���� ����������
	cout << "Radian:" << RAD << endl;
	// ������ Begin12 ���� �������� ����� ����. ������� ������ �������� ������� �� ������� ����� � ����
    // ���������� ������ L, S, D, SqrR, R;
	double L, S, D, SqrR, R;
	// �������� ����� S (����� ����)
	cout << "Begin12:" << endl;
	cout << "Enter S:";
	cin >> S;
	// ���������� ���������� �� ��������
	SqrR = S / pinumb;
	R = sqrt(SqrR);
	D = R * 2;
	L = pinumb * D;
	// ���� ����������
	cout << "Diameter:" << D << endl;
	cout << "Length:" << L << endl;
	return 0;
}