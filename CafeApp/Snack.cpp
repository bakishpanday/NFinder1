
#include <iostream>
#include <vector>
#include "Snack.h"

// constructor
Snack::Snack() {
	Food::SetName("Veggie");
	SetNames();
} // constructor

string Snack::GetDesc() {
	return desc;
} // GetDesc()

void Snack::SetDesc(string d) {
	desc = d;
} // SetDesc()

void Snack::SetNames() {
	names.push_back("Cookies");
	names.push_back("Pastries");
	names.push_back("Sandwiches");
	names.push_back("Cakes");
}

vector<string> Snack::GetNames() {
	return names;
}

string Snack::GetItem(int idx) {
	return names.at(idx);
}