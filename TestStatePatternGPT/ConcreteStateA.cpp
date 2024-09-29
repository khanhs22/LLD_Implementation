#include "ConcreteStateA.h"
#include "Context.h"
#include "ConcreteStateB.h"
#include <iostream>

void ConcreteStateA::handle(Context* context) {
    std::cout << "State A handling request, switching to State B." << std::endl;
    context->setState(new ConcreteStateB());  // Chuyển trạng thái sang ConcreteStateB
}