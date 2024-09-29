#include "PublishState.h"
#include "WritingCodeState.h"
#include "Context.h"

void PublishState::createNew()
{
    std::cout << "Cretate new code\n";
    m_pContext->changeState(new WritingCodeState());
}