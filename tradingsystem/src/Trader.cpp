#include "../includes/Trader.h"
#include "../includes/Orders.h"

int Trader::getID() const{
	return this->id;
}
double Trader::getBalance()const{
	return this->balance;
}

const std::vector<Order>& Trader::getOrders()const{
	return this->open_orders;
}
void Trader::addBalance(double new_deposit){
	this->balance += new_deposit;
}
void Trader::addOrder(const Order & neworder){
	if(this->balance - neworder.getPrice() >= 0){
		this->balance -= neworder.getPrice();
	}
}

