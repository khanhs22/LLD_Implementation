#include "ProductsManager.h"

ProductsManager::ProductsManager()
{
}

void ProductsManager::addProduct(Product product, int quantities)
{
    if(m_products.count(product) > 0) {
        m_products[product] = m_products[product] + quantities;
    } else {
        m_products[product] = quantities;
    }
}

bool ProductsManager::checkProductAvailable(Product product) const
{
    if(m_products.count(product) > 0 && m_products[product] > 0) {
        return true;
    }
    return false;
}

void ProductsManager::dispenseProduct(Product product)
{
    m_products[product] = m_products[product] - 1;
}

void ProductsManager::displayProducts()
{
    for(auto m : m_products) {
        std::cout << m.first.getName() << " has " << m.second << '\n';
    }
}
