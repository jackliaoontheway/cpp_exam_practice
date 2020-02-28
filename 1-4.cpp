#include <iostream>

using namespace std;

int main() 
{
	
	int oneInt = 1;
	int & ref = oneInt;
	const int & refc = oneInt;
	ref = 2;
	cout << oneInt << endl;
	cout << ref << endl;
	cout << refc << endl;
	
	oneInt = 3;
	cout << oneInt << endl;
	cout << ref << endl;
	cout << refc << endl;
	
	int & ref2 = ref;
	cout << ref2 << endl;
	// refc = 5; 	[Error] assignment of read-only reference 'refc'
	
	// ʹ�� T ���͵ı����� T& ���͵����ã����Գ�ʼ�� const T & ���͵����ú� T& ���͵�����
	// ���ǣ� ʹ��const T & �������� �� const T ���ͱ���������������ʼ�� T &���͵�����
	// �������Ҫ���� ��Ҫǿ��ת�� 
	
	int oneInt2 = ref;
	cout << oneInt2 << endl;
	oneInt2 = refc;
	cout << oneInt2 << endl;
	
	const int & ci = ref2; // ok
	
	// refc = ref;
	// int & oneIntRef = refc; // [Error] invalid initialization of reference of type 'int&' from expression of type 'const int'
	
	
	return 0;
}
