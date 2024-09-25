#ifndef Product_h
#define Product_h

#include <string>

class Product
{
private:
    std::string m_name;
    int m_price;
public:
    Product(const std::string &name, int m_price);
    std::string getName() const;
    int getPrice() const;
};

#endif