#include <iostream>

#include "strategy.hpp"

using namespace std;

Context::Context(Button type) : strategy{nullptr}, button{type} {
    cout << "type" << type << endl;
    switch (type) {
        case BUTTON_1:
            strategy = new ConcreteStrategyA();
            break;
        case BUTTON_2:
            strategy = new ConcreteStrategyB();
            break;
        case BUTTON_3:
            strategy = new ConcreteStrategyC();
            break;
        default:
            cout << "Unknown button type" << endl;
            break;
    }
};

double ConcreteStrategyA::AlgorithmInterface(double money) {
    cout << "I'm ConcreteStrategyA !!!" << endl;
    return money * 0.1;
};

double ConcreteStrategyB::AlgorithmInterface(double money) {
    cout << "I'm ConcreteStrategyB !!!" << endl;
    return money * 0.2;
};

double ConcreteStrategyC::AlgorithmInterface(double money) {
    cout << "I'm ConcreteStrategyC !!!" << endl;
    return money * 0.3;
};