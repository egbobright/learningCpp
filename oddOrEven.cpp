#include <iostream>
using namespace std;

int main(){
	cout << "Please select two numbers\n";
	int lowest;
	int highest;
	cout << "Kindly input the lowest number\n";
	cin >> lowest;
	cout << "kindly input the highest number\n";
	cin >> highest;	
	for(int i=lowest; i<highest; i++){
		if(i%2 == 0){
			cout << i << " is an even number\n";
		}else{
			cout << i << " is a odd number\n";
		}
	}
	return 0;
}