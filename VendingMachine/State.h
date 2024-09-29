#ifndef State_h
#define State_h

#include "VendingMachine.h"
#include "Product.h"
#include "Money.h"
#include <iostream>

class VendingMachine;

class State
{
protected:
    VendingMachine* m_pVendingMachine;
public:
    // State() {};
    // State(VendingMachine* vendingMachine) : m_pVendingMachine(vendingMachine) {};
    // ~State();
    void setVendingMachine(VendingMachine* vendingMachine) {m_pVendingMachine = vendingMachine;}
    virtual void chooseProduct(Product *product) {}
    virtual void putMoney(Money money) {}
    virtual void returnChange() {}
    virtual void dispenseProduct() {}
};

#endif