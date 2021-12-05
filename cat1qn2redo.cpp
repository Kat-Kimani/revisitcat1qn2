#include<iostream>
using namespace std;

int main() {

	double faren, cel, kel;
	faren = -32.0;

	cout << "Convert Temperature from Farehnheit to Celsius" << endl;
	cout << "Key in temperature in Farehnheit: " << endl;
	cin >> faren;
	cel = 5.0 / 9.0 * faren;


	cout << "Temperature in Celsious is : " << cel << endl;

	return 0;
}