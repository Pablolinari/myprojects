#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>
#include "../includes/Orders.h"
#include "../includes/Stock.h"
#include "../includes/Trader.h"

class Orderbook{
private:
	std::unordered_map<int, Stock* > stocks;
    std::unordered_map<int,Trader*>traders;
	unordered_map<int,vector<Orders*> >orders;
	mutable mutex mx;
public:
	Orderbook();
	void addOrder(ArchivedOrder*);
    void addStock(Stock*);
    void removeOrder(ArchivedOrder*);
    Stock* getStock(int) const;
    Trader* getTrader(int) const;
};

#endif // !ORDERBOOK_H
