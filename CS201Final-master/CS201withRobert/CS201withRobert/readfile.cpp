//readfile.cpp
//Adrian Antonio &Robert Shidner
//4/19/2018
//Reads a file to make use of it 

#include"readFile.h"



void writeOnFile(string s) {
	string text;

	ofstream myfile(s+".txt");//opens a text file called <s>

	if (myfile.is_open()) {//opens the file and checks if its open

		myfile << "This is a line.\n";//outputs the string to the file
		myfile.close();
		cout << "Success!";
	}
	else {
		cout << "Unable to open file";
	}
}

void decFile() {
	string line;
	ifstream myfile("example.txt");
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			cout << line<<'\n';
		}
		cout << "Success!";
	}
	else {
		cout << "Unable to open file";
	}
}