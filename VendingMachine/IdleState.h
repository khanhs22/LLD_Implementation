#ifndef IdleState_h
#define IdleState_h

#include "State.h"

class IdleState : public State
{
private:
    /* data */
public:
    void chooseProduct(Product *product) override;
};

#endif