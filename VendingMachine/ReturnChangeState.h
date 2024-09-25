#ifndef ReturnChangeState_h
#define ReturnChangeState_h

#include "State.h"

class ReturnChangeState : public State
{
public:
    ReturnChangeState(VendingMachine* vendingMachine) : State(vendingMachine) {};
    virtual void chooseProduct(Product product) {};
    virtual void putMoney(Money value) {};
    virtual void dispenseProduct() {};
    virtual void returnChange();
};

#endif