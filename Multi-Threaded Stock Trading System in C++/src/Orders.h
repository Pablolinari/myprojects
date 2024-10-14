#ifndef ORDER_H
#define ORDER_H
#pragma once 
#include <cerrno>
#include <string>
#include "Stock.h"
class Order{
private:
	std::string name;
	int id;
	Stock stock;
	double count;
	double price;
public:
	Order(int id , Stock stock , double count , double price ,std::string name );
	int getId();
	Stock getStock();
	double getCount();
	double getPrice();
	std::string getName();

};
#endif
