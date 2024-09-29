#include "ReviewState.h"
#include "WritingCodeState.h"
#include "PublishState.h"

void ReviewState::approve()
{
    std::cout << "Approved code\n";
    m_pContext->changeState(new PublishState());
}

void ReviewState::reject()
{
    std::cout << "Rejected code\n";
    m_pContext->changeState(new WritingCodeState());
}
