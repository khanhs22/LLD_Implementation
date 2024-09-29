#ifndef Product_h
#define Product_h

#include <string>

class Product
{
private:
    std::string m_name;
    int m_price;
public:
    Product(std::string name, int price);
    ~Product();

    std::string getName() const;
    int getPrice() const;
    bool operator<(const Product& other) const {return this->m_name < other.m_name;}
};

#endif