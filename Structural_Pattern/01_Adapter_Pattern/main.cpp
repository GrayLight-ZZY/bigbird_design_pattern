#include <iostream>

#include "adapter_pattern.hpp"

using namespace std;

int main() {
    string target_name = "Target", adapter_name = "Adapter";
    Target_1* target_1 = new Target_1(target_name);
    Adapter* adapter = new Adapter(adapter_name);

    cout << "Target_1 action :" << endl;
    target_1->action();
    cout << "Adapter action :" << endl;
    adapter->action();

    return 0;
}