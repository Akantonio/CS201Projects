
#include"encryption.h"


void charCount(string text, map<char, int> & keys) {
	for (auto &val : keys) {
		for (auto let : text) {
			if (let == val.first || let + 32 == val.first) {
				val.second++;
			}
		}
	}
}

void encryption::encrypting() {
	vector<int> letters;
	for (int i = 0; i < 26; ++i) {
		letters.push_back(i);
	}
	int myrandom = 907;
	shuffle(begin(letters), end(letters), myrandom); //THIS DOESN'T WORK
	for (auto i = 0; i <26; ++i) {
		cout << letters.at(i) << " ";
	}
	map<int, char> key;
	for (int i = 0; i < 25;++i) {
		key[i] = (char)(97 + i);
	}

	
}

void encryption::encrypting(int n) {	
}
