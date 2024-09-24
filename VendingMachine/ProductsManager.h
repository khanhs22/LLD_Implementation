#ifndef ProductManager_h
#define ProductManager_h

#include "Enum.h"
#include "Product.h"
#include <unordered_map>

class ProductsManager
{
private:
    std::unordered_map<Product, int> m_products;
public:
    ProductsManager();
    void addProduct(Product product, int quantities);
    bool checkProductAvailable(Product product) const;
    void dispenseProduct(Product product);
    void displayProducts();
};

#endif