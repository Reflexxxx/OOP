// taask25.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string isPalindrom(string);
string longestString(string first, string second, string third);

int main() {
	string s = "aacabacg"; // output cabac
	string s1 = "abaca"; // output ccc
	string s2 = "caccsc"; // output cccc
	string s3 = "aabbcbbaa"; // output 0
	string s4 = "qwertyuiopasdfghj";
	string s5 = "abracadabra";

	cout << s5 << ":  " << isPalindrom(s5);
	cout << endl;
	cout << s4 << ":  " << isPalindrom(s4);
	cout << endl;
	cout << s3 << ":  " << isPalindrom(s3);
	cout << endl;
	cout << s2 << ":  " << isPalindrom(s2);
	cout << endl;
	cout << s << ":  " << isPalindrom(s);
	_getch();
	return 0;
}

string longestString(string first, string second, string third) {
	string max = "";
	if (first.size() >= second.size())
		max = first;
	else
		max = second;
	if (third.size() >= max.size())
		max = third;
	return max;
}

string isPalindrom(string s) {
	if (s.size() <= 1)
		return s;
	else if (s[0] == s[s.size() - 1])
		return s[0] + isPalindrom(s.substr(1, s.size() - 2)) + s[0];
	else
		return(longestString(isPalindrom(s.substr(0, s.size() - 2)),
			isPalindrom(s.substr(1, s.size() - 1)),
			isPalindrom(s.substr(1, s.size() - 2))));
}



