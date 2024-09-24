#include "ReturnChangeState.h"

void ReturnChangeState::returnChange() override
{
    if(m_vendingMachine->getCurrPayment() > m_vendingMachine->getCurrChooseProduct().getPrice()) {
        std::cout << "Return " << m_vendingMachine->getCurrPayment() - m_vendingMachine->getCurrChooseProduct().getPrice() << " nghin dong!\n";
    } else {
        std::cout << "Don't have money to return!\n";
    }

    std::cout << "Thank you!\n";
    m_vendingMachine->changeState(new IdleState(m_vendingMachine));
}