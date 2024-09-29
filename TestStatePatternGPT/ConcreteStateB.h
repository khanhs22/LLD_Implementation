#ifndef CONCRETESTATEB_H
#define CONCRETESTATEB_H

#include "State.h"

class ConcreteStateB : public State {
public:
    void handle(Context* context) override;
};

#endif // CONCRETESTATEB_H