#ifndef READFILE_H
#define READFILE_H

#include<string>
#include<map>


void writeOnFile(std::string s, std::string line);
std::string decFile(std::string s);
void charCount(std::string text, std::map<char, int> & keys);

#endif // !READFILE_H
