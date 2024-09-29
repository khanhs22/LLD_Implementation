#ifndef STATE_H
#define STATE_H

class Context;

class State {
public:
    virtual ~State() {}
    virtual void handle(Context* context) = 0;
};

#endif // STATE_H