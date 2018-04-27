#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <string>
#include <vector>

class encryption {
private:
	std::vector<int> _letters;
public:
	void encrypting(std::string s);
	void encrypting(int n);
};

#endif // !ENCRYPTION_H
