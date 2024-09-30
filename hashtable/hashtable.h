#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <cmath>
#include <cstddef>
#include <iterator>
#include <limits>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
typedef struct {
	int id;
	string value;
}Cell; 

class Hashtable{
private:
	vector<Cell> table;
	size_t actual;
	size_t capacity;
	int hash(const int hasher){
		return hasher%this->capacity;
	}
	bool expand(){
		if (this->capacity/2 >= numeric_limits<size_t>::max()) {
			throw "capacity over the limit ";
			return false;
		}
		else {
			this->capacity = this->capacity*2;
			this->table.resize(this->capacity);
			return true;
		}
	}
public:
	Hashtable(size_t capacity){
		this->table = vector<Cell>(capacity);
		this->actual = 0;
		this->capacity = this->table.size();

	}
	size_t getactualsize(){return this->actual;}
	size_t getcapacity(){return this->capacity;}

	void insert(Cell celda){
		if(this->actual==this->capacity){
			this->expand();
		}
			int pos = hash(celda.id);
			while(this->table[pos].value != ""){
				pos = hash(pos +1);
			}
				this->table[pos] = celda;
				this->actual++;
		
	}
	Cell get(Cell celda){
		int pos = hash(celda.id);
		while(this->table[pos].id!=celda.id){ 
			pos = hash(pos+1);
		}
		return this->table[pos];
	}

	Cell remove(Cell celda){
		int pos = hash(celda.id);
		while(this->table[pos].id!=celda.id){ 
			pos = hash(pos+1);
		}
		Cell empty ;
		Cell celd = this->table[pos] ;
		this->table[pos]=empty ;
		this->actual--;
		return celd;
	}
	void print(){
		cout << "tabla"<< endl;
		string hseparator = "\n-------------------------------------\n";
		for (int i = 0; i< this->table.size(); i++){
			cout<<hseparator << this->table[i].id<<" | "<<this->table[i].value<<hseparator;
		}

	}


}; 



#endif // !HASHTABLE_H
