// Task32.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stdlib.h> 
#include <algorithm>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	map <char, int> la, lb;
	for (char ch : a) {
		la[ch]++;
	}
	for (char ch : b) {
		lb[ch]++;
	}
	string x = "";
	for (auto el : la) {
		int minC = min(el.second, lb[el.first]);
		for (int i = 0; i < minC; i++) {
			x += el.first;
		}
	}
	cout << x << endl;
	system("pause");
}
