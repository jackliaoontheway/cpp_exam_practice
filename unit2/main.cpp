#include <iostream>
#include "Mx.h"
using namespace std;

Mx operator + (Mx &a, Mx &b) {
	Mx c;
	for(int i = 0;i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			c.m[i][j] = a.m[i][j] + b.m[i][j];
		}
	}
	return c;
}

int main() {
	Mx a,b,c;
	a.input();
	b.input();
	
	c = a + b;
	c.show();
	return 0;
}

