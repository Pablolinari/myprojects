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
	int id;
	std::unordered_map<Trader,Stock > buy_orders;
	std::unordered_map<Trader,Stock > sell_orders;


public:
	Orderbook();
	void addBuyOrder(const Trader & t1,const Stock & s1);
	void addSellOrder(const Trader & t1,const Stock & s1);
    void removeOrder(ArchivedOrder*);
    Stock* getStock(int) const;
    Trader* getTrader(int) const;
};

#endif // !ORDERBOOK_H
