#include <iostream>

#include "adapter_pattern.hpp"

using namespace std;

// Class Target
Target::Target(string name) : Name{name} {}

// Class Adaptee
Adaptee::Adaptee(string name) : Name(name) {}

void Adaptee::out_action() {
    cout << "Action from Adapter !" << endl;
}

// Class Adapte
Adapter::Adapter(string name) : Target(name) {
    adaptee = new Adaptee(name);
}

void Adapter::action() {
    cout << "Adapter begin !" << endl;
    adaptee->out_action();
}

// Class Target_1
Target_1::Target_1(string name) : Target(name) {}

void Target_1::action() {
    cout << "Action from Target_1 !" << endl;
}
