#pragma once

#include <string>
// #include <iostream>

#include "Types.h"

using namespace std;

class AbstractStrategy {
   public:
    virtual double AlgorithmInterface(double money) = 0;
};

class Context {
   private:
    AbstractStrategy* strategy;
    Button button;

   public:
    Context(Button type);
    double get_result(const double money) {
        return this->strategy->AlgorithmInterface(money);
    };
};

class ConcreteStrategyA : public AbstractStrategy {
   public:
    double AlgorithmInterface(double money) override;
};

class ConcreteStrategyB : public AbstractStrategy {
   public:
    double AlgorithmInterface(double money) override;
};

class ConcreteStrategyC : public AbstractStrategy {
   public:
    double AlgorithmInterface(double money) override;
};