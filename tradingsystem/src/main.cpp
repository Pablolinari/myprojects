#include <iostream>
#include <string>
#include "../includes/Trader.h"
#include "../includes/Stock.h"
using namespace std;
int main (int argc, char *argv[]) {
	Trader trader1(123, 5000.00);
	Stock stock1("diesel",9798,9083.3,123.4);
	Order order1(456,stock1,1.5,47.00,"diesel");
	cout << "Balance : "<< trader1.getBalance()<<endl;
	trader1.addOrder(order1);
	cout << "Balance : "<< trader1.getBalance()<<endl;
	
	return 0;
}
