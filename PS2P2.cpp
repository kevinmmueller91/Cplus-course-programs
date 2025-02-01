#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// define variables
	float hrs, rate, grossPay;
	string lname;

	// input phase
	cout << "Enter employee last name: ";
	cin >> lname;
	cout << "Enter hours worked: ";
	cin >> hrs;
	cout << "Enter your pay rate: ";
	cin >> rate;

	// process phase
	grossPay = hrs * rate;

	cout << setprecision(2) << fixed << endl;
	cout << "Employee " << lname;
	cout << " gross pay is: $" << grossPay << endl;

	return 0;

}	// end of main