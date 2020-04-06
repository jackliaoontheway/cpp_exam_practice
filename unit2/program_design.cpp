#include <iostream>

using namespace std;

class Mx{
	public :
		Mx();
		friend Mx operator+(Mx &,Mx &);
		void input();
		void show();
	private :
		int m[2][3];
};
Mx::Mx() {
	for(int i = 0;i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			m[i][j] = 0;
		}
	}
}

Mx operator + (Mx &a, Mx &b) {
	Mx c;
	for(int i = 0;i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			c.m[i][j] = a.m[i][j] + b.m[i][j];
		}
	}
	return c;
}

void Mx::input() {
	for(int i = 0;i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			cin >>	m[i][j];
		}
	}
}

void Mx::show(){
		for(int i = 0;i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			cout <<	m[i][j];
		}
	}
}

int main() {
	Mx a,b,c;
	a.input();
	b.input();
	
	c = a + b;
	c.show();
	return 0;
}


