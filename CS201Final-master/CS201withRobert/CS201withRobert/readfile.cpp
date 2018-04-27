//readfile.cpp
//Adrian Antonio &Robert Shidner
//4/19/2018
//Reads a file to make use of it 

#include"readFile.h"
#include"encryption.h"


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

string decFile() {
	string line;
	string read;
	ifstream myfile("example.txt");
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			read += line+"\n"; //Adds the next line into the string
		}
		cout << read << '\n';//checking to make sure it works
		cout << "Success!";
	}
	else {
		cout << "Unable to open file";
	}
	return read;
}