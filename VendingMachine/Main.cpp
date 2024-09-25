#include "VendingMachine.h"

int main() {

    ProductManager* manager = new ProductManager();

    Product coca = Product("Coca", 10);
    Product water = Product("Water", 5);
    Product redBull = Product("RedPull", 15);

    manager->addProduct(coca, 5);
    manager->addProduct(water, 10);
    manager->addProduct(redBull, 10);

    VendingMachine* vendingMachine = new VendingMachine(manager);

    return 0;
}