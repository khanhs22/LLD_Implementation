#include "Context.h"

Context::Context(State* state) : currentState(state) {}

Context::~Context() {
    delete currentState;
}

void Context::setState(State* state) {
    delete currentState;  // Giải phóng trạng thái cũ
    currentState = state;
}

void Context::request() {
    if (currentState)
        currentState->handle(this);
}