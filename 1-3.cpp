#include <iostream>

using namespace std;

void func(int a = 11, int b = 22 , int c = 33) //只能为函数最后面的连续若干个参数设置默认值
{
	cout << a << "\t" << b << "\t" << c << "\t" << endl;
}


int main() // main 必须return int 
{
	func();
	func(55); //调用处只能缺省后面的连续若干实参 
	func(77,99);
	func(8,88,888);
	return 0;
}
