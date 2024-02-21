#include <iostream>

#include "simple_factory.hpp"

using namespace std;

int main() {
    Operation *oper;
    double number_A = 0;
    double number_B = 0;
    std::string operation;
    cout << "please insert number_A :";
    cin >> number_A;
    cout << "please insert number_B :";
    cin >> number_B;
    cout << "please insert operation :";
    cin >> operation;

    oper = OperationFactory::createOperate(operation);
    if (oper == nullptr) {
    }
    oper->set_number_A(number_A);
    oper->set_number_B(number_B);

    cout << "the result is :" << oper->get_Result() << endl;
    return 0;
}