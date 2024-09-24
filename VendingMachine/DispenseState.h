#ifndef DispenseState_h
#define DispenseState_h

#include "State.h"

class DispenseState : virtual public State
{
public:
    void dispenseProduct() override;
};

#endif