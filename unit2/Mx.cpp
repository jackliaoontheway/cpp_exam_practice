#include <iostream>
#include "Mx.h"
using namespace std;

Mx::Mx() {
	for(int i = 0;i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			m[i][j] = 0;
		}
	}
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


