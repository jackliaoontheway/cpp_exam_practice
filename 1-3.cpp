#include <iostream>

using namespace std;

void func(int a = 11, int b = 22 , int c = 33) //ֻ��Ϊ�����������������ɸ���������Ĭ��ֵ
{
	cout << a << "\t" << b << "\t" << c << "\t" << endl;
}


int main() // main ����return int 
{
	func();
	func(55); //���ô�ֻ��ȱʡ�������������ʵ�� 
	func(77,99);
	func(8,88,888);
	return 0;
}
