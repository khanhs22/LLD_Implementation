#ifndef Context_h
#define Context_h

#include "State.h"
// #include "PublishState.h"
// #include "ReviewState.h"
// #include "WritingCodeState.h"

class State;

class Context
{
private:
    State* m_pState;
public:
    Context();
    ~Context();
    void changeState(State* state);
    void checkCode();
    void reject();
    void approve();
    void createNew();
};

#endif