#include <iostream>
using namespace std;

int main(){
	double fahrenheit, celsius;
	cout << "Kindly input your temp in celsius\t"; 
	cin >> celsius;
	fahrenheit = (celsius * 1.8) + 32;
	cout << celsius << " celsius  is equal to " << fahrenheit << " fahrenheit\n";

	return 0;
}