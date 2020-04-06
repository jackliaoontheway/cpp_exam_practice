#include <iostream>
#include <string>
using namespace std;

template <class T> void change(T &i, T &j);

int main() {
	int a ,b; 
	cin >> a >> b;
	change(a,b);
	cout << a << b;
	
	string s1,s2;
	cin >> s1 >> s2;
	change(s1,s2);
	cout << s1 << s2;
	
/*	cin.get();
	char *s1 = "", *s2 = "";
	char str1[20],str2[20];
	s1 = str1; s2 = str2;
	cin.getline(s1,20);
	cin.getline(s2,20);
	change(s1,s2);
	cout << s1 << s2;*/
}

template <class T> void change(T &i, T &j) {
	T temp = i;
	i = j;
	j = temp;
}
