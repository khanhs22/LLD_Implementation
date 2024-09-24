#ifndef State_h
#define State_h

#include "VendingMachine.h"

class VendingMachine;

class State
{
protected:
    VendingMachine* m_vendingMachine;
public:
    explicit State(VendingMachine* vendingMachine);
    virtual void chooseProduct(Product product) = 0;
    virtual void putMoney(Money value) = 0;
    virtual void dispenseProduct() = 0;
    virtual void returnChange() = 0;

};


#endif