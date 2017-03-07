#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
	string name;

public:
	// constructor
	Animal() { cout << "Animal created." << endl; }

	// copy constructor
	Animal(const Animal& other) : name(other.name) { cout << "Animal created by copying." << endl; }

	// destructor
	~Animal() { cout << "Destructor called" << endl; }
	void setName(string name) { this->name = name; }
	void speak() const { cout << "My name is: " << name << endl; }
};


int main() {

/*	int *pInt = new int;
	*pInt = 8;
	cout << *pInt << endl;
	delete pInt;
	*/

	Animal *pAnimal = new Animal[10];

	pAnimal[5].setName("George");
	pAnimal[5].speak();

	delete [] pAnimal;

	char *pMem = new char[1000];
	delete[] pMem;

	return 0;
}

// create class 