#ifndef ReviewState_h
#define ReviewState_h

#include "State.h"

class ReviewState : public State
{
private:
    /* data */
public:
    // ReviewState(Context* context) : State(context) {};
    void approve() override;
    void reject() override;
};

#endif