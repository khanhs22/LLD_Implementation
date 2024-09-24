#ifndef VendingMachine_h
#define VendingMachine_h

#include "State.h"
#include "ProductsManager.h"
#include "ReadyState.h"
#include "IdleState.h"
#include "DispenseState.h"
#include "ReturnChangeState.h"

class State;

class VendingMachine
{
private:
    State* m_state;
    ProductsManager* m_manager;
    Product m_currChooseProduct;
    int m_currPayment;
public:
    VendingMachine(ProductsManager* manager);
    void changeState(State* state);
    void chooseProduct(Product product);
    void putMoney(Money value);
    void dispenseProduct();
    void returnChange();

    State* getSate() {return m_state};
    ProductsManager* getProductsManager() {return m_manager;}
    Product getCurrChooseProduct() {return m_currChooseProduct;}
    void setCurrChooseProduct(Product product) {m_currChooseProduct = product;}
    int getCurrPayment() const {return m_currPayment;}
    void setCurrPayment(int payment) {m_currPayment = payment;}

};

#endif