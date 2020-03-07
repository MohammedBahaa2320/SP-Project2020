#include <iostream>
using namespace std;
int main() {
	int i, j;
	float base_price[3];
	float taxes[3];
	float max_price[3];
	float net_price[3];
	for(i = 0; i >= 2; i++)
		cout << "Enter base price of product : ";
		cin >> base_price[i]; cout << endl;
		cout << "taxes of the product : ";
		cin >> taxes[i]; cout << endl;
		cout << "maximum price of the belonging production line : ";
		cin >> max_price[i]; cout << endl;
		net_price[i] = base_price[i] + base_price[i] * taxes[i] / 100; 
		if (net_price[i] > max_price[i])
	    cout << "product net price is NOT accepted";
		else if (net_price[i] < max_price[i])
		cout << "product net price is accepted";
	hello
}
