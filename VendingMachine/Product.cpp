#include "Product.h"

Product::Product(const std::string &name, int price)
    : m_name(name), m_price(price)
{
}

const std::string& Product::getName() const
{
    return m_name;
}

int Product::getPrice() const
{
    return m_price;
}
