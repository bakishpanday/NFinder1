
#include <iostream>
#include <array>
#include <vector>

using namespace std;

#include "Order.h"
#include "Drink.h"
#include "Meat.h"
#include "Snack.h"
#include "Veggie.h"
#include "CafeApp.h"

Order order;
Drink drink;
Meat meat;
Snack snack;
Veggie veggie;
string menu[] = { "Drink", "Meat", "Snack", "Veggie" };

int main()
{    
    bool isDone = false;
    bool isMainProgramDone = false;
    int choice = 0;

    while (!isMainProgramDone) { 
        while (!isDone) {
            isDone = AddOrder();
        }

        order.PrintItems();
        if (ResetOrder()) continue;

        bool removeItem = true;
        while (removeItem) {
            removeItem = _RemoveItem();
        }

        isMainProgramDone = true;
    }
    return 0;
}

bool AddOrder() {
    int menuChoice = 0;
    int itemChoice = 0;
    int goBack = false; 
    // prints menu
    cout << "Select a category: (99) to exit!" << endl;
    for (int i = 1; i < menu->length(); i++) {
        cout << i << ") " << menu[i - 1] << endl;
    }

    cin >> menuChoice;

    switch (menuChoice) {
    case 99: { // exit
        return true;
        break;
    }
    case 1: { // add drink
        while (!goBack) {
            drink.PrintMenu(drink.GetNames());
            cin >> itemChoice;
            if (itemChoice != 99)
                order.AddItem(drink.GetItem(itemChoice - 1));
            else
                goBack = true;
        }
        break;
    }
    case 2: { // add meat
        while (!goBack) {
            meat.PrintMenu(meat.GetNames());
            cin >> itemChoice;
            if (itemChoice != 99)
                order.AddItem(meat.GetItem(itemChoice - 1));
            else
                goBack = true;
        }
        break;
    }
    case 3: { // add meat
        while (!goBack) {
            snack.PrintMenu(snack.GetNames());
            cin >> itemChoice;
            if (itemChoice != 99)
                order.AddItem(snack.GetItem(itemChoice - 1));
            else
                goBack = true;
        }
        break;
    }
    case 4: { // add meat
        while (!goBack) {
            veggie.PrintMenu(veggie.GetNames());
            cin >> itemChoice;
            if (itemChoice != 99)
                order.AddItem(veggie.GetItem(itemChoice - 1));
            else
                goBack = true;
        }
        break;
    }
    default: { // default
        cout << "opps" << " you entered " << menuChoice << endl;
        break;
    }
    } // switch
    return false;
}

bool _RemoveItem() {
    int choice;
    cout << "Would you like to remove an item? 1) Yes 2) No";
    cin >> choice;

    if (choice == 1) { // could loop to allow removing more than 1 item
        order.PrintItemsWithIndex();
        cin >> choice;
        order.RemoveItem(choice - 1);
        order.PrintItems();
        return true;
    }
    else {
        return false;
    }
}

bool ResetOrder() {
    int choice;
    cout << "Would you like to reset the order? 1) Yes 2) No";
    cin >> choice;

    if (choice == 1) {
        order.RemoveAllItems();
        return true;
    }
    else {
        return false;
    }
}