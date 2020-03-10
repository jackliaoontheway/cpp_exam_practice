#include <iostream>

using namespace std;

int main() {
	
	int a = 4;
	
	int a1 = 3;
	const int a2 = a1;
	int * a3 = &a1;
	
	const int * a4 = &a1;
	a4 = &a;
	//*a4 = 1; // error
	
	int * const a5 = &a1;
	*a5 = 6;
	//a5 = &a; // error 
	
	// * 既可以作为左值也可以作为右值
	// & 只能作为右值 
	
	a = *a5;
	cout << a << endl;
	
	int const * const a6 = &a1;
	const int * const a7 = &a1;
	
	
}
