#include <iostream>
#include <string>

using namespace std;
int main() {

	int oneInt1, oneInt2;
	char strArray[20];
	string str;
	double oneDouble;
	char oneChar = 'a';
	cout << "输入两个整型值，一个字符，一个字符串和一个浮点值,";
	cout << "以空格，Tab键 <Enter> 分隔" << endl;
	cin >> oneInt1 >> oneInt2 >> oneChar >> strArray >> oneDouble;
	str = strArray;
	cout << "输入的数据 : " << endl;
	cout << "字符串: \t\t" << str << endl  // endl 换行 
		<< "两个整型值 \t" << oneInt1 << "和" << oneInt2 << endl  // \t是制表符 
 		<< "字符是 \t\t" << oneChar << "\n" // \n是换行符
		<< "浮点值是 \t\t" << oneDouble << endl;
	
	return 0;
}





