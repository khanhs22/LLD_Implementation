#ifndef ReadyState_h
#define ReadyState_h

#include "State.h"

class ReadyState : public State
{
private:
    /* data */
public:
    void putMoney(Money money) override;
};

#endif