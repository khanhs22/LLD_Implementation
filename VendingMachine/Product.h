#ifndef Product_h
#define Product_h

#include <iostream>

class Product
{
private:
    std::string m_name;
    int m_price;

public:
    Product(const std::string &name, int price);
    const std::string& getName() const;
    int getPrice() const;
};

#endif