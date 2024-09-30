#include "hashtable.h"
#include <hashtable.h>
 
using namespace std;

int main (int argc, char *argv[]) {
	Hashtable tabla(7);
	Cell c1 ,c2,c3,c4,c5,c6;
	c1.id=2144;
	c1.value="limon";	
	c2.id=5634;
	c2.value="pera";
	c3.id=2784;
	c3.value="platano";	
	c4.id=9756;
	c4.value="manzana";

	tabla.insert(c1);tabla.insert(c2);tabla.insert(c3);tabla.insert(c4);
	tabla.print();
	tabla.get(c3);
	tabla.print();
	tabla.remove(c2);
	tabla.print();

	return 0;
}
