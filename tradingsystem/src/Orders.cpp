#include "../includes/Orders.h"
#include "../includes/Stock.h"
Order::Order(int id , Stock stock ,double count , double price,std::string name):  id(id),stock(stock),count(count),price(price),name(name){}

int Order::getId(){
	return this->id;
}
const Stock Order::getStock(){
	return this->stock;
}

const double Order::getCount(){
	return this->count;
}
const double Order::getPrice()const{
	return this->price;
}
std::string Order::getName(){
	return this->name;
}
