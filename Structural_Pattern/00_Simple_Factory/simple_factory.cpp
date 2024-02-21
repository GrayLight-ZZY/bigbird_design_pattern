#include "simple_factory.hpp"

#include <stdio.h>

#include <iostream>

Operation *OperationFactory::createOperate(const std::string &operate) {
    Operation *oper = nullptr;
    if (operate == "+") {
        oper = new OperationAdd;
    } else if (operate == "-") {
        oper = new OperationSub;
    } else if (operate == "*") {
        oper = new OperationMul;
    } else if (operate == "/") {
        oper = new OperationDev;
    } else {
        cout << "You have inserted wrong operation !" << endl;
    }
    return oper;
}

double OperationAdd::get_Result() {
    return this->number_A + this->number_B;
}

double OperationSub::get_Result() {
    return this->number_A - this->number_B;
}

double OperationMul::get_Result() {
    return this->number_A * this->number_B;
}

double OperationDev::get_Result() {
    return this->number_A / this->number_B;
}
