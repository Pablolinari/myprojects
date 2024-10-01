#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>
#include <ctime>
#include <functional>
using namespace std;
class Block{
private: 
	int index;
	time_t timestamp;
	string previous_hash;
	string hash;
	string data;
public:
	Block(int index, string previous_hash, string data){
		this->timestamp = time(nullptr);
		this->index = index;
		this->data = data;
		this->previous_hash = previous_hash;
		hash = calculateHash();

	}
	string calculateHash(){
		stringstream ss;
		ss << index << timestamp<< previous_hash;
		return simpleHash(ss.str());

	}
	static  string simpleHash(const string &str){

		std::hash<string> hasher;

		auto hash = hasher(str);
		std::stringstream ss;
		ss <<std::hex<< hash;
		return ss.str();

	} 
	string getHash(){
		return this->hash;
	}
	string getprevHash(){
		return this->previous_hash;
	}
	int getindex(){return this->index;}
	string getdata(){return this->data;}
	time_t getime(){return this->timestamp;}
	

};

class Blockchain{
private:
	vector<Block> chain;
public:
	void creategenesisblock(){
		this->chain.emplace_back(Block(0,"","first block"));
	}
	Block getLatestBlock(){
		return this->chain.back();
	}
	void addBlock(string data){
		this->chain.emplace_back(Block(chain.size(),chain.back().getHash(),data));
	}
	bool isChainValid(){
		bool valid = true;
		int i = 1;
		while (valid && i!=this->chain.size()) {
			if(this->chain[i].getprevHash() != this->chain[i-1].getHash()){
				valid = false;
			}
			i++;
		}
		return valid;
	}
	vector<Block> getChain(){
		return this->chain;
	}


};

int main() {
    Blockchain blockchain;
	blockchain.creategenesisblock();
    int numBlocks;
    std::cout << "Enter the number of blocks to add: ";
    std::cin >> numBlocks;
    std::cin.ignore(); // To ignore the newline character left in the input buffer
    for (int i = 0; i < numBlocks; ++i) {
        std::string data;
        std::cout << "Enter data for block " << i + 1 << ": ";
        std::getline(std::cin, data);
        blockchain.addBlock(data);
    }
    std::cout << "Blockchain valid: " << blockchain.isChainValid() << std::endl;
	vector<Block> chain = blockchain.getChain();
    for (auto it=chain.begin(); it != chain.end();it++){
        std::cout << "Index: " << it->getindex()<< std::endl;
        std::cout << "Data: " << it->getdata()<< std::endl;
        std::cout << "Timestamp: " << it->getime() << std::endl;
        std::cout << "Previous Hash: " << it->getprevHash() << std::endl;
        std::cout << "Hash: " << it->getHash() << std::endl;
        std::cout << "------------------------" << std::endl;
    }
    return 0;
}










