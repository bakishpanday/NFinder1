
#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
using namespace std;

class Order {
public:
	Order();
	void AddItem(string item);
	void RemoveItem(int idx);
	void RemoveAllItems();
	void PrintItems();
	void PrintItemsWithIndex();

private:
	vector<string> items;
};

#endif // !ORDER_H
