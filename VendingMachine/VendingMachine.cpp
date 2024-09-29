#include "VendingMachine.h"

VendingMachine::VendingMachine(State *state, ProductManager *productManager) : m_productManager(productManager)
{
    changeState(state);
}

VendingMachine::~VendingMachine()
{
    delete m_state;
}

void VendingMachine::chooseProduct(Product *product)
{
    m_state->chooseProduct(product);
}

void VendingMachine::putMoney(Money money)
{
    m_state->putMoney(money);
}

void VendingMachine::dispenseProduct()
{
    m_state->dispenseProduct();
}

void VendingMachine::returnChange()
{
    m_state->returnChange();
}

void VendingMachine::changeState(State *state)
{
    if(m_state != nullptr) {
        delete m_state;
    }
    m_state = state;
    m_state->setVendingMachine(this);
}

void VendingMachine::setCurrChooseProduct(Product *product)
{
    m_currChooseProduct = product;
}

Product *VendingMachine::getCurrChooseProduct()
{
    return m_currChooseProduct;
}

ProductManager *VendingMachine::getProductManager()
{
    return m_productManager;
}

void VendingMachine::setCurrPayment(int payment)
{
    m_currPayment = payment;
}

int VendingMachine::getCurrPayment() const
{
    return m_currPayment;
}
