#include <iostream>

using namespace std;

int & refValue(int &a) {
	return a;
}



int main() {
	
	int a = 100;
	refValue(a) = 10;
	cout << a;
	
	refValue(a) = 20;
	cout << a;
	
}
