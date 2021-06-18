
#include <iostream>
#include <vector>
#include "Veggie.h"

// constructor
Veggie::Veggie() {
	Food::SetName("Veggie");
	SetNames();
} // constructor

string Veggie::GetDesc() {
	return desc;
} // GetDesc()

void Veggie::SetDesc(string d) {
	desc = d;
} // SetDesc()

void Veggie::SetNames() {
	names.push_back("Salad");
	names.push_back("Hash Brown");
	names.push_back("Sweet Potato");
	names.push_back("Veg Burger");
}

vector<string> Veggie::GetNames() {
	return names;
}

string Veggie::GetItem(int idx) {
	return names.at(idx);
}