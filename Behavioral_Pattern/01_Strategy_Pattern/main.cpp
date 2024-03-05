#include <iostream>

#include "Types.h"
#include "strategy.hpp"

using namespace std;

int main() {
    cout << "This is 01_Strategy_Factory of Behavioral_Pattern!" << endl;
    Context* context;
    int button;
    cout << "Please input your Button_number from 1 to 3 !" << endl;
    cin >> button;
    context = new Context(static_cast<Button>(button));
    cout << "Please enter your money!" << endl;
    int money = 0;
    cin >> money;
    context->get_result(money);
    return 0;
}