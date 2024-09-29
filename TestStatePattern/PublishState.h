#ifndef PublishState_h
#define PublishState_h

#include "State.h"

class PublishState : public State
{
private:
    /* data */
public:
    // PublishState(Context* context) : State(context) {};
    void createNew() override;
};

#endif