//main.cpp
//Adrian Antonio & Robert Shidner
//4/16/2018
//Final Project for CS201 spring

#include"readfile.h"
#include"decrypt.h"
#include"encryption.h"

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <map>
using std::map;
#include <string>
using std::string;
#include<sstream>
using std::istringstream;

int intReturn() {
	while (true) {
		string line;
		getline(cin, line);

		istringstream instream(line);
		int num;
		instream >> num;
		if (instream) {
			return num;
		}
		else {
			cout << "Please enter an integer" << endl;
		}
	}
}

int main() {

	cout << "Decryption Algorithm" << endl << endl;

	while (true) {
		int choice;
		encryption test;
		string line1;
		string line3;

		cout << "1 Encrypt a file" << endl;
		cout << "2 Attempt to decrypt a file" << endl;
		cout << "3 Quit" << endl << endl;
		cout << "Choice: ";
		choice = intReturn();
		cout << endl;
	
		switch (choice) {
		case 1:
			//
			cout << "Enter the name of file to be encrypted (without file ending): ";
			getline(cin, line1);
			test.encrypting(line1);
			break;
		case 2:
			//
			cout << "Enter the name of file to be decrypted (without file ending): ";
			getline(cin, line3);
			decrypt(line3);
			break;
		case 3:
			//This just ends the program.
			cout << "Exiting program";
			return 0;
		default:
			cout << "Please enter a proper menu item." << endl << endl;
			break;
		}
	}
}