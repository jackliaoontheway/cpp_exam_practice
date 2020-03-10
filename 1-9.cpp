#include <iostream>
#include <string.h>

using namespace std;

int main() {
	string s1,s2;
	s1 = "C++≥Ã–Ú…Ëº∆";
	s2 = s1;
	string s3;
	s3 = s1 + s2;
	
	cout << s1 << endl;	
	cout << s2 << endl;	
	cout << s3 << endl;	
	
	char c = s1[0];
	cout << c << endl;
	
	char arrstr [] = "Hello";
	string ss = arrstr;
	cout << ss << endl;
	ss += arrstr;
	cout << ss << endl;
	
	if(ss.empty()) {
		return 0;
	} else {
		cout << ss << endl;
	}
	
	cout << ss.find("H",1) << endl;
	cout << ss.find("X",0) << endl;
	
	cout << ss << endl;
	cout << ss.length() << endl;
	cout << ss.size() << endl;
	cout << ss.substr(0,3) << endl;
	cout << ss.append("X") << endl;
	cout << ss.insert(0,"J") << endl;
	const char * cs  = ss.c_str();
	cout << *cs << endl;
	cout << cs << endl;
}
