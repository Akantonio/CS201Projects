//decrypt.cpp
//Adrian Antonio &Robert Shidner
//4/19/2018
//Takes a file and attempts to decrypt it. 

#include "decrypt.h"
#include "readfile.h"

#include<iostream>
using std::cout;
using std::endl; 
#include <map>
using std::map;
#include <string>
using std::string;

void decrypt(string s) {
	map<char, int> key;
	for (int i = 0; i < 26; i++) {
		char temp = 'a' + i;
		key[temp] = 0;
	}
	string activeFile = decFile(s);

	charCount(activeFile, key);


	for (auto val : key) {
		cout << val.first << " " << key[val.first] << endl;
	}

}