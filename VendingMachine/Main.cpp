#include "VendingMachine.h"
#include "IdleState.h"


int main() {
    ProductManager* productManager = new ProductManager();
    Product* coca = new Product("coca", 10);
    Product* water = new Product("water", 5);
    Product* redbull = new Product("redbull", 15);
    Product* nope = new Product("nope", 15);

    productManager->addProduct(coca, 10);
    productManager->addProduct(water, 5);
    productManager->addProduct(redbull, 5);
    productManager->addProduct(nope, 1);

    VendingMachine* vendingMachine = new VendingMachine(new IdleState(), productManager);
    vendingMachine->chooseProduct(coca);
    vendingMachine->putMoney(Money::vnd_5k);
    vendingMachine->putMoney(Money::vnd_10k);

    vendingMachine->dispenseProduct();
    vendingMachine->returnChange();

    vendingMachine->chooseProduct(nope);
    vendingMachine->putMoney(Money::vnd_5k);
    vendingMachine->putMoney(Money::vnd_10k);

    vendingMachine->dispenseProduct();
    vendingMachine->returnChange();

    vendingMachine->chooseProduct(nope);

    return 0;
}