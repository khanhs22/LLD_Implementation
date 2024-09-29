#include "Product.h"

Product::Product(std::string name, int price) : m_name(name), m_price(price)
{
}

Product::~Product()
{
}

std::string Product::getName() const
{
    return m_name;
}

int Product::getPrice() const
{
    return m_price;
}
