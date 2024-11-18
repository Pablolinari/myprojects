#include "Trader.h"
int Trader::getID() const{

	return this->id;
}
char Trader::getType()const{
	return this->type;
}
double Trader::getBalance()const{
	return this->balance;
}
const std::vector<Stock*>& Trader::getStocks()const{
	return this->stocks;
}
