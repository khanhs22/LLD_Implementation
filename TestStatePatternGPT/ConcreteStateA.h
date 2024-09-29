#ifndef CONCRETESTATEA_H
#define CONCRETESTATEA_H

#include "State.h"

class ConcreteStateA : public State {
public:
    void handle(Context* context) override;
};

#endif // CONCRETESTATEA_H