#include <iostream>
using namespace std;

int main() {
	
	int a = 10;
	const int *p = &a;
	const int ca = 30;
	int *q;
	cout << "a address : \t" << &a << "\t value : " << a << endl; 
	cout << "*p address  : \t" << p << "\t value : " << *p << endl;
	
	q = const_cast<int *>(p);  // const_cast<int *>(���ʽ) ȥ��p�ĳ����� ����q�� ���д�� q=p �򱨴�
	*q = 20; // ���д�� *p = 20; �򱨴�
	
	cout << "a address : \t" << &a << "\t value : " << a << endl;  // a ��� 20 
	cout << "*p address  : \t" << p << "\t value : " << *p << endl;
	cout << "*q address  : \t" << q << "\t value : " << *q << endl;
	
	p = &ca;
	q = const_cast<int *>(p);
	*q = 40;
	cout << "ca address : \t" << &ca << "\t value : " << ca << endl;  // ca ��ֵ 30 ���� 
	cout << "*p address  : \t" << p << "\t value : " << *p << endl;
	cout << "*q address  : \t" << q << "\t value : " << *q << endl;
	
	
}
