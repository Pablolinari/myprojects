
#define STOCK_H
#include <string>
class Stock{
private:
	std::string name;
	int id;
	double sellprice;
	double buyprice;
public:
	Stock(std::string name, int id, double sellprice , double buyprice);
	std::string getName();
	int getId();
	double getSellprice();
	double getButprice();
	double getPrice();
	void setSellprice(double sell_price);
	void setBuyprice(double buy_price);

};
