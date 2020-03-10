#include <iostream>

using namespace std;

void swap(int,int);
void swapRel(int&,int&);

void swap(int a,int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapRel(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}


int main() {
	
	int a = 10,b = 20;
	swap(a,b);
	cout << a << b;
	
	int c = 10,d = 20;
	swapRel(c,d);
	cout << c << d;
}
