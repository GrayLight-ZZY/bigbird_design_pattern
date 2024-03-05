#pragma once

#include <iostream>

using namespace std;

class Target {
   protected:
    string Name;

   public:
    Target(string name);
    virtual void action() = 0;
};

class Adaptee {
   private:
    string Name;

   public:
    Adaptee(string name);
    void out_action();
};
class Adapter : private Target {
   protected:
    Adaptee* adaptee;

   public:
    Adapter(string name);
    void action() override;
};

class Target_1 : public Target {
   public:
    Target_1(string name);
    void action() override;
};
