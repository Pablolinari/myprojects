#ifndef ORDER_H
#define ORDER_H
#endif // !ORDER_H
#define ORDER_H

#include <cerrno>
class Order{
private:
	int *id;
	Trader *trader;
	Stock *stock;
	int count;
	double price;
public:
	int getId();
	Trader getTrader();
	Stock getStock();
};
