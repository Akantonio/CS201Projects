//main.cpp
//Adrian Antonio & Robert Shidner
//4/16/2018
//Final Project for CS201 spring

#include"readFile.h"

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <map>
using std::map;
#include <string>
using std::string;


void charCount(string text, map<char, int> & keys) {
	for (auto &val : keys) {
		for (auto let : text) {
			if (let == val.first || let+32 == val.first) {
				val.second++;
			}
		}
	}
}

map<char, int> key;

int main() {
	for (int i = 0; i < 26; i++) {
		char temp = 'a' + i;
		key[temp] = 0;
	}
	charCount("This is some text.", key);

	for (auto val : key) {
		cout << val.first << " " << key[val.first] << endl;
	}
	openFile();
	while (cin.get() != '\n');
	return 0;
}