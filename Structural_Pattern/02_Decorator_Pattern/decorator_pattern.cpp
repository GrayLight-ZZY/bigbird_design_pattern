#include <iostream>

#include "decorator_pattern.hpp"

using namespace std;

// class ConcreteComponent
ConcreteComponent::ConcreteComponent(const string name) {
    this->name = name;
}

void ConcreteComponent::Operation() {
    std::cout << "The ConcreteComponent is : " << name << std::endl;
}

// class Decorator
Decorator::Decorator(Component* component) {
    this->component = component;
}

void Decorator::Operation() {
    component->Operation();
}

// class Decorator_A
Decorator::Decorator() {}

Decorator_A::Decorator_A(Component* component) {
    this->component = component;
}

void Decorator_A::Operation() {
    Decorator::Operation();
    Decorator_A::special_function();
}

void Decorator_A::special_function() {
    std::cout << "I am the special functionA" << std::endl;
}

// class Decorator_B
Decorator_B::Decorator_B(Component* component) {
    this->component = component;
}

void Decorator_B::Operation() {
    Decorator::Operation();
    Decorator_B::special_function();
}

void Decorator_B::special_function() {
    std::cout << "I am the special functionB" << std::endl;
}