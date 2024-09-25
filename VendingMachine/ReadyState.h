#ifndef ReadyState_h
#define ReadyState_h

#include "State.h"

class ReadyState : public State
{
public:
    void chooseProduct(Product product) {};
    void putMoney(Money value);
    void dispenseProduct() {};
    void returnChange() {};
};

#endif