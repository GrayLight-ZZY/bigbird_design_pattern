#include <iostream>

#include "decorator_pattern.hpp"

using namespace std;

int main() {
    ConcreteComponent* component = new ConcreteComponent("ZZY");
    Decorator_A* dec_A = new Decorator_A(component);
    Decorator_B* dec_B = new Decorator_B(dec_A);

    Component* ZZY = dec_B;
    ZZY->Operation();
    return 0;
}