#include "WritingCodeState.h"
#include "ReviewState.h"

void WritingCodeState::checkCode()
{
    std::cout << "Checking code\n"; 
    m_pContext->changeState(new ReviewState());
}
