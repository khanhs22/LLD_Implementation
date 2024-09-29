#ifndef WritingCodeState_h
#define WritingCodeState_h

#include "State.h"

class WritingCodeState : public State
{
private:
    /* data */
public:
    // WritingCodeState(Context* context) : State(context) {};
    void checkCode() override;
};

#endif