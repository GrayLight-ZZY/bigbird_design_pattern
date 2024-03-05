#pragma once

#include <string>

using namespace std;

class Operation {
   protected:
    double number_A = 0;
    double number_B = 0;

   public:
    double get_number_A() { return this->number_A; }
    void set_number_A(double value) { this->number_A = value; }
    double get_number_B() { 
        return this->number_B; }
    void set_number_B(double value) { this->number_B = value; }

    virtual double get_Result() = 0;
};
class OperationFactory {
   public:
    static Operation* createOperate(const string& oper);
};

class OperationAdd : public Operation {
   public:
    double get_Result() override;
};

class OperationSub : public Operation {
    public:
    double get_Result() override;
};

class OperationMul : public Operation {
   public:
    double get_Result() override;
};

class OperationDev : public Operation {
   public:
    double get_Result() override;
};