#include<iostream>
using namespace std;
int main()
{
	// define variables
	double l, w, area, perimeter;

	// input phase
	cout << "Enter length: ";
	cin >> l;
	cout << "Enter width: ";
	cin >> w;

	// process phase
	area = l * w;
	perimeter = 2 * l + 2 * w;

	// output phase
	cout << "The area is: " << area << endl;
	cout << "The perimeter is: " << perimeter << endl;

	return 0;

}	// end of main