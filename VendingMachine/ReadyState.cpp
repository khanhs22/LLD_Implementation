#include "ReadyState.h"
#include "DispenseState.h"

void ReadyState::putMoney(Money money)
{
    int prePayment = m_pVendingMachine->getCurrPayment();
    int currPaymemt = prePayment + static_cast<int>(money);
    m_pVendingMachine->setCurrPayment(currPaymemt);
    if(currPaymemt >= m_pVendingMachine->getCurrChooseProduct()->getPrice()) {
        std::cout << "Enough money, dispensing product ..." << std::endl;
        m_pVendingMachine->changeState(new DispenseState());
    } else {
        std::cout << "Not enough money, put more ..." << m_pVendingMachine->getCurrChooseProduct()->getPrice() - currPaymemt << std::endl;
    }
}