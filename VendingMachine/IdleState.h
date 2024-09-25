#ifndef IdleState_h
#define IdleState_h

#include "State.h"

class IdleState : public State
{
public:
    IdleState(VendingMachine* vendingMachine) : State(vendingMachine) {};
    virtual void chooseProduct(Product product);
    virtual void putMoney(Money value) {};
    virtual void dispenseProduct() {};
    virtual void returnChange() {};
};

#endif