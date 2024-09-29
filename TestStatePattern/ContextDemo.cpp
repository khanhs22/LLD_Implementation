#include "ContextDemo.h"
#include "WritingCodeState.h"

void ContextDemo::run()
{
    Context* context = new Context();
    State* first = new WritingCodeState();
    context->changeState(first);

    context->checkCode();
    context->reject();
    context->checkCode();
    context->approve();
    context->createNew();
}