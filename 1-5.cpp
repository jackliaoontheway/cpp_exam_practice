#include <iostream>

using namespace std;

int main() {
	
	const int cInt = 30;
	int oneInt = 50;
	int &ref = oneInt;
	
	const int &rc1 = cInt;
	const int & rc2 = oneInt;
	
}
