#include "ConcreteStateB.h"
#include "Context.h"
#include "ConcreteStateA.h"
#include <iostream>

void ConcreteStateB::handle(Context* context) {
    std::cout << "State B handling request, switching to State A." << std::endl;
    context->setState(new ConcreteStateA());  // Chuyển trạng thái sang ConcreteStateA
}
