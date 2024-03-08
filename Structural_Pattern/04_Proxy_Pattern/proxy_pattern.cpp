#include <iostream>

#include "proxy_pattern.hpp"

using namespace std;

// class RealSbject
void RealSbject::Function_A() {
    cout << "I am Function_A of RealSbject !!!" << endl;
}

void RealSbject::Function_B() {
    cout << "I am Function_A of RealSbject !!!" << endl;
}

// class Proxy
Proxy::Proxy(Subject* subject) {
    this->subject = subject;
}

void Proxy::Function_A() {
    // special situation
    if (0) {
    }
    subject->Function_A();
}

void Proxy::Function_B() {
    subject->Function_B();
}