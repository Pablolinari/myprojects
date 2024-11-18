#ifndef TRADER_H
#define TRADER_H
#include <string>
#include <vector>
#include "Stock.h"
#include "Orders.h"
class Trader {
private:
    int id;
    double balance;
	
public:
    Trader(int id, double balance) : id(id), balance(balance) {}
    int getID() const;
    char getType() const;
    double getBalance() const;
    const std::vector<Stock*>& getStocks() const;
    const std::vector<Order*>& getOrders() const;
    void setId(int);
    void setType(char);
    void setBalance(double);
    void addOrder(Order*);
    void addStock(Stock*);
    Stock* findStock(int) const;
    virtual std::string createOrder(Stock*) = 0;

};
#endif // !TRADER_H

