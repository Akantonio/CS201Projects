//readfile.cpp
//Adrian Antonio &Robert Shidner
//4/19/2018
//Reads a file to make use of it 

#include"readfile.h"

#include<iostream>
using std::cout;
using std::endl;
#include<fstream>
using std::ofstream;
using std::ifstream;
#include<string>
using std::string;
using std::getline;
#include<sstream>
using std::istringstream;
#include<map>
using std::map;

void writeOnFile(string s, string line) {
	ofstream myfile(s+".txt");//opens a text file called <s>

	if (myfile.is_open()) {//opens the file and checks if its open

		myfile << line;//outputs the string to the file
		myfile.close();
		cout << "Success!";
	}
	else {
		cout << "Unable to open file";
	}
}

string decFile(string s) {
	string line;
	string read;
	ifstream myfile(s+".txt");
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			read += line+"\n"; //Adds the next line into the string
		}
		cout << read << '\n'; //checking to make sure it works
		cout << "Success!" << endl;
	}
	else {
		cout << "Unable to open file";
	}
	return read;
}

void charCount(string text, map<char, int> & keys) {
	for (auto &val : keys) {
		for (auto let : text) {
			if (let == val.first || let + 32 == val.first) {
				val.second++;
			}
		}
	}
}