#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// define variables
	float price, discount;
	float discountAmount, discountPrice;

	// input phase
	cout << "Enter price: $";
	cin >> price;
	cout << "Enter discount percent in decimal form: ";
	cin >> discount;

	// process phase
	discountAmount = price * discount;
	discountPrice = price - discountAmount;

	// outphase phase
	cout << setprecision(2) << fixed << endl;
	cout << "Discount amount: $" << discountAmount << endl;
	cout << "Total discount price: $" << discountPrice << endl;

	return 0;

}	// end of main