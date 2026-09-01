#include <iostream>
using namespace std;

int main()
{
	double hours, rate, pay;

	cout << "how many hours did you work? ";
	cin >> hours;

	cout << "how much do you get paid per hour?";
	cin >> rate;

	pay = hours * rate;

	cout << "you have earned $" << pay << endl;
	return 0;
}