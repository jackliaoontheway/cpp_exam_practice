#include <iostream>
#include <string>

using namespace std;
int main() {

	int oneInt1, oneInt2;
	char strArray[20];
	string str;
	double oneDouble;
	char oneChar = 'a';
	cout << "������������ֵ��һ���ַ���һ���ַ�����һ������ֵ,";
	cout << "�Կո�Tab�� <Enter> �ָ�" << endl;
	cin >> oneInt1 >> oneInt2 >> oneChar >> strArray >> oneDouble;
	str = strArray;
	cout << "��������� : " << endl;
	cout << "�ַ���: \t\t" << str << endl  // endl ���� 
		<< "��������ֵ \t" << oneInt1 << "��" << oneInt2 << endl  // \t���Ʊ�� 
 		<< "�ַ��� \t\t" << oneChar << "\n" // \n�ǻ��з�
		<< "����ֵ�� \t\t" << oneDouble << endl;
	
	return 0;
}





