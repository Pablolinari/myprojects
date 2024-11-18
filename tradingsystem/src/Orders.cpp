#include "../includes/Orders.h"
#include "../includes/Stock.h"
#include <memory>
Order::Order(int id, Stock stock, double count , double price,std::string name ):id(id), stock(stock), count(count), price(price),name(name){}

int Order::getId(){
	return this->id;
}
Stock Order::getStock(){
	return this->stock;
}

double Order::getCount(){
	return this->count;
}
double Order::getPrice(){
	return this->price;
}
std::string Order::getName(){
	return this->name;
}
