#include "Stock.h"
#include <string>
Stock::Stock(std::string name , int id , double sellprice, double buyprice): name(name) , id(id), sellprice(sellprice),buyprice(buyprice){}
std::string Stock::getName(){
	return this->name;
}
int Stock::getId(){
	return this->id;
}
double Stock::getSellprice(){
	return this->sellprice;
}
double Stock::getButprice(){
	return this->buyprice;
}
double Stock::getPrice(){
	return (this->sellprice + this->buyprice)/2;
}
void Stock::setSellprice(double sell_price){
	this->sellprice = sell_price;
}

