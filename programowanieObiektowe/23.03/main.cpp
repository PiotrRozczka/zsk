#include <iostream>
#include <typeinfo>
#include <string>
#include "add.h"
#include "animal.h"
#include "dog.h"

class Test{
	public:
	void getName(){
		Test test;
		std::string name = typeid(test).name();
		std::cout << name.substr(1);
	}
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Animal *wsk1 = new Animal();
	wsk1->speak();
	
	
	Dog dog;
	dog.speak();
	
	std::string name =  typeid(dog).name(); 
	
	std::cout << name.substr(1);
	
	std::cout << std::endl;
	
	Test test;
	test.getName();
	
	return 0;
}
