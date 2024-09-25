#ifndef ReadyState_h
#define ReadyState_h

#include "State.h"

class ReadyState : public State
{
public:
    ReadyState(VendingMachine* vendingMachine) : State(vendingMachine) {};
    virtual void chooseProduct(Product product) {};
    virtual void putMoney(Money value);
    virtual void dispenseProduct() {};
    virtual void returnChange() {};
};

#endif