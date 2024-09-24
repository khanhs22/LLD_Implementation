#ifndef ReturnChangeState_h
#define ReturnChangeState_h

#include "State.h"

class ReturnChangeState : virtual public State
{
public:
    void returnChange() override;
};

#endif