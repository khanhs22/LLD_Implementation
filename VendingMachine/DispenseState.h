#ifndef DispenseState_h
#define DispenseState_h

#include "State.h"

class DispenseState : public State
{
private:
    /* data */
public:
    void dispenseProduct() override;
};

#endif