#ifndef CONTEXT_H
#define CONTEXT_H

#include "State.h"

class Context {
public:
    Context(State* state);
    ~Context();

    void setState(State* state);
    void request();

private:
    State* currentState;
};

#endif // CONTEXT_H