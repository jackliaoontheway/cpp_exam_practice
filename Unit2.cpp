#include <iostream>
using namespace std;

int fun1(int);
void test();

int main() {
	char ch[3][4] = {"AAA","BB","CCC"},(*q)[4] = ch,*p;
	int i ;
	p = new char;
	*p = 'b';
	*(*q + 3) = *p;
	for(i = 0; i < 3; i++) {
		cout << q[i] << endl;
	}


	test();

	return 0;
}

void test() {
	int i = 12;
	int (*fp)(int);
	fp = fun1;
	cout << "fun1:" << (*fp)(i) <<endl;
}
int fun1(int k) {
	k = k * 2 + 1;
	return k;
}
