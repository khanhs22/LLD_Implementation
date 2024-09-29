#include "Context.h"

Context::Context()
{
}

Context::~Context()
{
    delete m_pState;
}

void Context::changeState(State *state)
{
    if(m_pState != nullptr) {
        delete m_pState;
        m_pState = nullptr;
    }
    m_pState = state;
    m_pState->setContext(this);
}

void Context::checkCode()
{
    m_pState->checkCode();
}

void Context::reject()
{
    m_pState->reject();
}

void Context::approve()
{
    m_pState->approve();
}

void Context::createNew()
{
    m_pState->createNew();
}
