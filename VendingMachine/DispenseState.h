#ifndef DispenseState_h
#define DispenseState_h

#include "State.h"

class DispenseState : public State
{
public:
    void chooseProduct(Product product) {};
    void putMoney(Money value) {};
    void dispenseProduct();
    void returnChange() {};
};

#endif