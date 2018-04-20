//readfile.cpp
//Adrian Antonio &Robert Shidner
//4/19/2018
//Reads a file to make use of it 

#include"readFile.h"



void openFile() {
	ofstream myfile("example.txt");
	if (myfile.is_open()) {
		myfile << "This is a line.\n";
		myfile.close();
		cout << "Success";
	}
	else {
		cout << "Unable to open file";
	}
}