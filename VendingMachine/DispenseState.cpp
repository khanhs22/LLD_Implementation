#include "DispenseState.h"

void DispenseState::dispenseProduct()
{
    std::cout << "Dispensing " << m_vendingMachine->getCurrChooseProduct().getName() << '\n';
    std::cout << "Take it!!!\n";
    m_vendingMachine->changeState(new ReturnChangeState(m_vendingMachine));
}
