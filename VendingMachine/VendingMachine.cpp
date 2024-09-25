#include "VendingMachine.h"

VendingMachine::VendingMachine(ProductManager* manager)
    :m_manager(manager)
{
    m_state = new IdleState(this);
}

void VendingMachine::changeState(State *state)
{
    if(m_state != nullptr)
        delete m_state;
    m_state = state;
}

void VendingMachine::chooseProduct(Product product)
{
    m_state->chooseProduct(product);
}

void VendingMachine::putMoney(Money value)
{
    m_state->putMoney(value);
}

void VendingMachine::dispenseProduct()
{
    m_state->dispenseProduct();
}

void VendingMachine::returnChange()
{
    m_state->returnChange();
}
