#pragma once

#include <string>

using namespace std;

class Component {
   private:
   public:
    virtual void Operation();
};

class ConcreteComponent : public Component {
   private:
    string name;

   public:
    ConcreteComponent(const string name);
    void Operation() override;
};

class Decorator : public Component {
   private:
   protected:
    Component* component;

   public:
   Decorator();
    Decorator(Component*);
    void Operation() override;
};

class Decorator_A : public Decorator {
   private:
    void special_function();

   public:
    Decorator_A(Component*);
    void Operation() override;
};

class Decorator_B : public Decorator {
   private:
    void special_function();

   public:
    Decorator_B(Component*);
    void Operation() override;
};
