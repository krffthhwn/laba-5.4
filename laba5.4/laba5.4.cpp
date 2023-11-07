#include <iostream>

#include <cmath>

using namespace std;

double S0()
{
	double s = 0;
	for (int i = 1; i <= 15; i++)

		s += (sin(10. * i) + cos(10. / i)) / sqrt(i);
	return s;
}

double S1(int i)
{
	if (i > 15)
		return 0;

	else
		return ((sin(10. * i) + cos(10. / i)) / sqrt(i)) + S1(i + 1);
}

double S2(int i)
{
	if (i < 1)
		return 0;

	else
		return ((sin(10. * i) + cos(10. / i)) / sqrt(i)) + S2(i - 1);
}

double S3(int i, double t)
{
	t = t + (sin(10. * i) + cos(10. / i)) / sqrt(i);

	if (i >= 15)
		return t;

	else
		return S3(i + 1, t);
}

double S4(int i, double t)
{
	t = t + (sin(10. * i) + cos(10. / i)) / sqrt(i);

	if (i <= 1)
		return t;

	else
		return S4(i - 1, t);
}

int main()
{

	cout << "(iter) S0 = " << S0() << endl;
	cout << "(rec up ++) S1 = " << S1(1) << endl;
	cout << "(rec up --) S2 = " << S2(15) << endl;
	cout << "(rec down ++) S3 = " << S3(1, 0) << endl;
	cout << "(rec down --) S4 = " << S4(15, 0) << endl;

	return 0;
}
