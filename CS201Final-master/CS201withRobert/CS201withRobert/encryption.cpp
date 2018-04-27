
#include "encryption.h"
#include "readfile.h"

#include<algorithm>
using std::shuffle;
using std::random_shuffle;
#include<iostream>
using std::cout;
using std::endl;
#include<iterator>
using std::begin;
using std::end;
#include<map>
using std::map;
#include<string>
using std::string;
#include<vector>
using std::vector;
#include <random>
using std::mt19937;


void encryption::encrypting(string s) {
	for (int i = 0; i < 26; ++i) {
		_letters.push_back(i);
	}
	mt19937 myrandom(907);
	shuffle(begin(_letters), end(_letters), myrandom);
	map<char, char> key;
	for (int i = 0; i < 25;++i) {
		key[i + 97] = (char)(97 + _letters.at(i));
	}

	string activeFile = decFile(s);

	if (activeFile == "\0") {
		return;
	}

	for (char & c : activeFile) {
		if (c >= 65 && c <= 90) {
			c = c + 32;
		}
		if (c >= 97 && c <= 122) {
			c = key[c];
		}
	}

	writeOnFile(s+"Encrypt", activeFile);
	
}

void encryption::encrypting(int n) {	
}
