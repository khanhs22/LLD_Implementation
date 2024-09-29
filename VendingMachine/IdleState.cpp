#include "IdleState.h"
#include "ReadyState.h"

void IdleState::chooseProduct(Product *product)
{
    if(m_pVendingMachine->getProductManager()->checkProductAvailable(product)) {
        std::cout << "You choose " << product->getName() << std::endl;
        m_pVendingMachine->setCurrChooseProduct(product);
        m_pVendingMachine->changeState(new ReadyState());
    } else {
        std::cout << "Product is unavailable!" << std::endl;
    }
}