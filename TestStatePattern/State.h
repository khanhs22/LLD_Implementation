#ifndef State_h
#define State_h

#include "Context.h"
#include <iostream>

class Context;

class State
{
protected:
    Context* m_pContext;
public:
    // State() {}
    virtual ~State() {}
    void setContext(Context* context);
    virtual void checkCode() {};
    virtual void reject() {};
    virtual void approve() {};
    virtual void createNew() {};
};

#endif