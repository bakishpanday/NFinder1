
#ifndef VEGGIE_H
#define VEGGIE_H

#include<string>
#include<vector>

using namespace std;

#include "Food.h"

class Veggie : public Food {
public:
	Veggie();
	void SetDesc(string d);
	string GetDesc();
	void SetNames();
	vector<string> GetNames();
	string GetItem(int idx);
private:
	string desc;
	vector<string> names;
};

#endif // !VEGGIE_H