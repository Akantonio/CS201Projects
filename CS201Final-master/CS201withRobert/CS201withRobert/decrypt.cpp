//decrypt.cpp
//Adrian Antonio &Robert Shidner
//4/19/2018
//Takes a file and attempts to decrypt it. 

#include "decrypt.h"
#include "readfile.h"

#include<iostream>
using std::cout;
using std::endl; 
#include <vector>
using std::vector;
#include <map>
using std::map;
#include <string>
using std::string;

map<char,char> createSwapKey(map<int, char> key) {
	vector <char> freq{ 'e','t','a','o','i','n','s','h','r','d','l','c','u','m','w','f','g','y','p','b','v','k','j','x','q','z' };
	
	map<char, char> temp;

	for (int i = 0; i < 26; i++) {
		temp[key[i]] = freq.at(i);
	}

	return temp;
}

void decrypt(string s) {
	//creating the key
	map<char, int> key;
	for (int i = 0; i < 26; i++) {
		char temp = 'a' + i;
		key[temp] = 0;
	}
	//makes a string so decFile only has to be called once
	string activeFile = decFile(s);

	charCount(activeFile, key);

	//Testing to make sure charCount works.
	for (const auto val : key) {
		cout << val.first << " " << key[val.first] << endl;
	}

	//creates a second key to be modified.
	map<char, int> keyCopy = key;

	//creates a third key, this one with ints as keys for chars.
	map<int, char> orderedKey;
	for (int i = 0; i < 26; i++) {
		orderedKey[i] = 'a';
	}

	//orders letters by how often they are used.
	for (int i = 0; i < key.size(); i++) {
		char letter;
		int max = 0;
		for (auto & val : keyCopy) {
			if (val.second > max) {
				max = val.second;
				letter = val.first;
			}
		}
		orderedKey[i] = letter;
		keyCopy[letter] = 0;
	}

	//checks to make sure that ordering keys works.
	for (auto val : orderedKey) {
		cout << val.first << " " << val.second << endl;
	}

	//creates the swapKey
	/*map<char, char> swapKey = {
		{orderedKey[0], 'e'},
	{orderedKey[1],'t'},
	{orderedKey[2],'a'},
	{orderedKey[3],'o'},
	{orderedKey[4],'i'},
	{orderedKey[5],'n'},
	{orderedKey[6],'s'},
	{orderedKey[7],'h'},
	{orderedKey[8],'r'},
	{orderedKey[9],'d'},
	{orderedKey[10],'l'},
	{orderedKey[11],'c'},
	{orderedKey[12],'u'},
	{orderedKey[13],'m'},
	{orderedKey[14],'w'},
	{orderedKey[15],'f'},
	{orderedKey[16],'g'},
	{orderedKey[17],'y'},
	{orderedKey[18],'p'},
	{orderedKey[19],'b'},
	{orderedKey[20],'v'},
	{orderedKey[21],'k'},
	{orderedKey[22],'j'},
	{orderedKey[23],'x'},
	{orderedKey[24],'q'},
	{orderedKey[25],'z'}

	};*/

	map<char, char> swapKey = createSwapKey(orderedKey);

	//checks to makes sure the swapKey worked
	for (auto val : swapKey) {
		cout << val.first << " " << val.second << endl;
	}

	for (char & c : activeFile) {
		if (c >= 65 && c <= 90) {
			c = c + 32;
		}
		if (c >= 97 && c <= 122) {
			c = swapKey[c];
		}
	}

	writeOnFile(s+"Decrypt", activeFile);

}