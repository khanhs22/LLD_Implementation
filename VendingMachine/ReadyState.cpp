#include "ReadyState.h"

void ReadyState::putMoney(Money value) override
{
    m_vendingMachine->setCurrPayment(m_vendingMachine->getCurrPayment() + value);
    std::cout << "Put " << value << " nghin dong.\n";
    std::cout << "All " << m_vendingMachine->getCurrPayment() << " nghin dong.\n";
     if(m_vendingMachine->getCurrPayment() >= m_vendingMachine->getCurrChooseProduct().getPrice()) {
        std::cout << "Dispensing " << m_currChooseProduct.getName() << '\n';
        changeState(new DispenseState(m_vendingMachine));
    } else {
        std::cout << "Haven't enough money! Put more...\n";
    }
};