#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// define variables
	double credits, tuition;
	string lname;

	// input phase
	cout << "Enter last name: ";
	cin >> lname;
	cout << "Enter number of credits taken: ";
	cin >> credits;

	// process phase
	tuition = credits * 250.00 + 100.00;

	// outphase phase
	cout << setprecision(2) << fixed << endl;
	cout << "Student " << lname;
	cout << " owes $" << tuition << " total for tuition" << endl;

	return 0;

}	// end of main