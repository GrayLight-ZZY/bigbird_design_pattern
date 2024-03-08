#pragma once

class Subject {
   public:
    virtual void Function_A();
    virtual void Function_B();

   private:
};

class RealSbject : public Subject {
   public:
    void Function_A() override;
    void Function_B() override;

   private:
};

class Proxy : public Subject {
   public:
    Proxy(Subject* subject);
    void Function_A() override;
    void Function_B() override;

   private:
    Subject* subject;
};