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
	
	// 使用 T 类型的变量或 T& 类型的引用，可以初始化 const T & 类型的引用和 T& 类型的引用
	// 但是！ 使用const T & 类型引用 和 const T 类型变量，不能用来初始化 T &类型的引用
	// 如果必须要这样 需要强制转换 
	
	int oneInt2 = ref;
	cout << oneInt2 << endl;
	oneInt2 = refc;
	cout << oneInt2 << endl;
	
	const int & ci = ref2; // ok
	
	// refc = ref;
	// int & oneIntRef = refc; // [Error] invalid initialization of reference of type 'int&' from expression of type 'const int'
	
	
	return 0;
}
