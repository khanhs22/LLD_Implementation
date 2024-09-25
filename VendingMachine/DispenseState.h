#ifndef DispenseState_h
#define DispenseState_h

#include "State.h"

class DispenseState : public State
{
public:
    DispenseState(VendingMachine* vendingMachine) : State(vendingMachine) {};
    virtual void chooseProduct(Product product) {};
    virtual void putMoney(Money value) {};
    virtual void dispenseProduct();
    virtual void returnChange() {};
};

#endif