#include "DispenseState.h"
#include "ReturnChangeState.h"

void DispenseState::dispenseProduct()
{
    Product* chooseProduct = m_pVendingMachine->getCurrChooseProduct();
    m_pVendingMachine->getProductManager()->dispenseProduct(chooseProduct);
    std::cout << "Dispensed " << m_pVendingMachine->getCurrChooseProduct()->getName() << std::endl;
    std::cout << "Take it!" << std::endl;
    m_pVendingMachine->changeState(new ReturnChangeState());
}