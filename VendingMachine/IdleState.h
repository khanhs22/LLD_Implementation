#ifndef IdleState_h
#define IdleState_h

#include "State.h"

class IdleState : public State
{
public:
    void chooseProduct(Product product);
    void putMoney(Money value) {};
    void dispenseProduct() {};
    void returnChange() {};
};

#endif