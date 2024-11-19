#ifndef TRADER_H
#define TRADER_H
#include <string>
#include <vector>
#include "Orders.h"
#include "Stock.h"
class Trader {
private:
    int id;
    double balance;
	std::vector<Order> open_orders;

	
public:
    Trader(int id, double balance) : id(id), balance(balance) {}
    int getID() const;
    char getType() const;
    double getBalance() const;
    const std::vector<Stock>& getStocks() const;
    const std::vector<Order>& getOrders() const;
    void addBalance(double new_deposit);
    void addOrder(const Order & neworder);

};
#endif // !TRADER_H

