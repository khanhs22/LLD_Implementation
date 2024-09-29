#ifndef VendingMachine_h
#define VendingMachine_h

#include "State.h"
#include "Money.h"
#include "ProductManager.h"

class State;

class VendingMachine
{
private:
    State* m_state;
    Product* m_currChooseProduct;
    ProductManager* m_productManager;
    int m_currPayment;
public:
    VendingMachine(State* state,  ProductManager* productManager);
    ~VendingMachine();
    void chooseProduct(Product* product);
    void putMoney(Money money);
    void dispenseProduct();
    void returnChange();

    void changeState(State* state);
    void setCurrChooseProduct(Product* product);
    Product* getCurrChooseProduct();
    ProductManager* getProductManager();
    void setCurrPayment(int payment);
    int getCurrPayment() const;
};

#endif