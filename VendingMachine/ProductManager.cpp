#include "ProductManager.h"

ProductManager::ProductManager()
{
}

ProductManager::~ProductManager()
{
}

void ProductManager::addProduct(Product *product, int quantities)
{
    if(m_products.count(product) > 0) {
        m_products[product] += quantities;
    } else {
        m_products[product] = quantities;
    }
}

bool ProductManager::checkProductAvailable(Product *product) const
{
    if(m_products.count(product) > 0 && m_products.at(product) > 0) {
        return true;
    }

    return false;
}

void ProductManager::dispenseProduct(Product* product)
{
    m_products[product] -= 1;
}
