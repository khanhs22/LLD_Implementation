#ifndef ReadyState_h
#define ReadyState_h

#include "State.h"

class ReadyState : virtual public State
{
public:
    void putMoney(Money value) override;
};

#endif