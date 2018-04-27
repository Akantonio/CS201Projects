//main.cpp
//Adrian Antonio & Robert Shidner
//4/16/2018
//Final Project for CS201 spring

#include"readFile.h"
#include"encryption.h"

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <map>
using std::map;
#include <string>
using std::string;


map<char, int> key;

int main() {
	for (int i = 0; i < 26; i++) {
		char temp = 'a' + i;
		key[temp] = 0;
	}
	charCount(decFile("crypto"), key);

	for (auto val : key) {
		cout << val.first << " " << key[val.first] << endl;
	}
	writeOnFile("test", "Line.");
	decFile("test");
	while (cin.get() != '\n');
	return 0;
}