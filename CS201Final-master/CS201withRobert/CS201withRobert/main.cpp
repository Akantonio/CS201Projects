//main.cpp
//Adrian Antonio & Robert Shidner
//4/16/2018
//Final Project for CS201 spring

#include"readfile.h"
#include"decrypt.h"

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <map>
using std::map;
#include <string>
using std::string;


int main() {

	decrypt("crypto");

	while (cin.get() != '\n');
	return 0;
}