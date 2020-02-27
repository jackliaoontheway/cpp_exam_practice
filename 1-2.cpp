#include <iostream>
using namespace std;

int main() {
	
	int a = 10;
	const int *p = &a;
	const int ca = 30;
	int *q;
	cout << "a address : \t" << &a << "\t value : " << a << endl; 
	cout << "*p address  : \t" << p << "\t value : " << *p << endl;
	
	q = const_cast<int *>(p);  // const_cast<int *>(表达式) 去除p的常量性 赋给q， 如果写成 q=p 则报错
	*q = 20; // 如果写成 *p = 20; 则报错
	
	cout << "a address : \t" << &a << "\t value : " << a << endl;  // a 变成 20 
	cout << "*p address  : \t" << p << "\t value : " << *p << endl;
	cout << "*q address  : \t" << q << "\t value : " << *q << endl;
	
	p = &ca;
	q = const_cast<int *>(p);
	*q = 40;
	cout << "ca address : \t" << &ca << "\t value : " << ca << endl;  // ca 的值 30 不变 
	cout << "*p address  : \t" << p << "\t value : " << *p << endl;
	cout << "*q address  : \t" << q << "\t value : " << *q << endl;
	
	
}
