#ifndef ProductManager_h
#define ProductManager_h

#include "Product.h"
#include <map>

class ProductManager
{
private:
    std::map<Product*, int> m_products;
public:
    ProductManager(/* args */);
    ~ProductManager();

    void addProduct(Product *product, int quantities);
    bool checkProductAvailable(Product *product) const;
    void dispenseProduct(Product *product);
};

#endif