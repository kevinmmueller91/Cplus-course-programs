#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// define variables
	float qty, unitPrice, extPrice;

	// input phase
	cout << "Enter unit price: $";
	cin >> unitPrice;
	cout << "Enter quantity: ";
	cin >> qty;

	// process phase
	extPrice = qty * unitPrice;

	cout << setprecision(2) << fixed << endl;
	cout << "Extended price is: $" << extPrice;

	return 0;

}	// end of main