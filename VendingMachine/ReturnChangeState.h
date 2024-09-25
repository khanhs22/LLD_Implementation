#ifndef ReturnChangeState_h
#define ReturnChangeState_h

#include "State.h"

class ReturnChangeState : public State
{
public:
    void chooseProduct(Product product) {};
    void putMoney(Money value) {};
    void dispenseProduct() {};
    void returnChange();
};

#endif