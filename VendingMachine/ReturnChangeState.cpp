#include "ReturnChangeState.h"
#include "IdleState.h"

void ReturnChangeState::returnChange()
{
    if(m_pVendingMachine->getCurrPayment() > m_pVendingMachine->getCurrChooseProduct()->getPrice()) {
        int returnMoney = m_pVendingMachine->getCurrPayment() - m_pVendingMachine->getCurrChooseProduct()->getPrice();
        std::cout << "Returning " << returnMoney << std::endl;
    } else {
        std::cout << "Don't have money to return!" << std::endl;
    }
    m_pVendingMachine->setCurrPayment(0);
    std::cout << "Thank you!" << std::endl;
    m_pVendingMachine->changeState(new IdleState());
}