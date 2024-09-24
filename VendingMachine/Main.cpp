#include "VendingMachine.h"

int main() {

    ProductsManager* manager = new ProductsManager();

    Product coca = new Product("Coca", 10);
    Product water = new Product("Water", 5);
    Product redBull = new Product("RedPull", 15);

    manager->addProduct(coca, 5);
    manager->addProduct(water, 10);
    manager->addProduct(redBull, 10);

    VendingMachine* vendingMachine = new VendingMachine(manager);

    return 0;
}