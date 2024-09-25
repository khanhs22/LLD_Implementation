#include "ReadyState.h"

void ReadyState::putMoney(Money value)
{
    m_vendingMachine->setCurrPayment(m_vendingMachine->getCurrPayment() + value.getValue());
    std::cout << "Put " << value.getValue() << " nghin dong.\n";
    std::cout << "All " << m_vendingMachine->getCurrPayment() << " nghin dong.\n";
    if(m_vendingMachine->getCurrPayment() >= m_vendingMachine->getCurrChooseProduct().getPrice()) {
        std::cout << "Dispensing " << m_vendingMachine->getCurrChooseProduct().getName() << '\n';
        m_vendingMachine->changeState(new DispenseState(m_vendingMachine));
    } else {
        std::cout << "Haven't enough money! Put more...\n";
    }
}