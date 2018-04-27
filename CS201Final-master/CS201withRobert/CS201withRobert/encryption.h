#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include<algorithm>
using std::shuffle;
using std::random_shuffle;
#include<iostream>
using std::cout;
using std::endl;
#include<iterator>
using std::begin;
using std::end;
#include<map>
using std::map;
#include<string>
using std::string;
#include<vector>
using std::vector;

void charCount(string text, map<char, int> & keys);

class encryption {
private:
	vector<int> _letters;
public:
	void encrypting();
	void encrypting(int n);
};

#endif // !ENCRYPTION_H
#pragma once
