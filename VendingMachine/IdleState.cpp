#include "IdleState.h"

void IdleState::chooseProduct(Product product) override
{
    if(m_vendingMachine->getProductsManager()->checkProductAvailable(product)) {
        m_vendingMachine->setCurrChooseProduct(product);
        std::cout << "You choose " << product.getName() << '\n';
        m_vendingMachine->changeState(new ReadyState(m_vendingMachine));
    } else {
        std::cout << product.getName() << " is unavailable!\n";
    }
}