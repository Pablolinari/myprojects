#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>
#include "Orders.h"
#include "Stock.h"
#include "Trader.h"
using namespace std;

class Orderbook{
private:
	unordered_map<int, Stock > stocks;
	unordered_map<int,Trader>traders;
	unordered_map<int,vector<Orders> >orders;
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
