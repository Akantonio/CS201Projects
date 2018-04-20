//readfile.cpp
//Adrian Antonio &Robert Shidner
//4/19/2018
//Reads a file to make use of it 

#include"readFile.h"



void openFile() {
	string text;

	ofstream myfile("example.txt");//opens a file called example.txt

	if (myfile.is_open()) {//opens the file and checks if its open

		myfile << "This is a line.\n";//outputs the string to the file
		myfile.close();
		cout << "Success";
	}
	else {
		cout << "Unable to open file";
	}
}