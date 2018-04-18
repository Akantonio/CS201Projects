//main.cpp
//Adrian Antonio & Robert Shidner
//4/16/2018
//Final Project for CS201 spring

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <map>
using std::map;

void charCount() {

}

map<char, int> key;

int main() {
	for (int i = 0; i < 26; i++) {
		char temp = 'a' + i;
		key[temp] = 1;
	}
	cout << "Hello, world!" << endl;

	cout << key['a'] << key['A'] << endl;
	while (cin.get() != '\n');
	return 0;
}