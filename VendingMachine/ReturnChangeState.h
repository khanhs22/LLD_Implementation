#ifndef ReturnChangeState_h
#define ReturnChangeState_h

#include "State.h"

class ReturnChangeState : public State
{
private:
    /* data */
public:
    void returnChange() override;
};

#endif