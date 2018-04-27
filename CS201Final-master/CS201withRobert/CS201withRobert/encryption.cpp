
#include"encryption.h"

#include<map>
using std::map;
#include<string>
using std::string;

void charCount(string text, map<char, int> & keys) {
	for (auto &val : keys) {
		for (auto let : text) {
			if (let == val.first || let + 32 == val.first) {
				val.second++;
			}
		}
	}
}