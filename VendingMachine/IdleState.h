#ifndef IdleState_h
#define IdleState_h

#include "State.h"

class IdleState : virtual public State
{
public:
    void chooseProduct(Product product) override;
};

#endif