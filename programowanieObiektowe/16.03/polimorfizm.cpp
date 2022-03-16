#include <iostream>

class Animal{
		float weight, age;
	public:
		void look(){
			std::cout << "Zwierzê patzy\n";
		}
		virtual void breathe(){
			std::cout << "Zwierzê oddycha\n";
		}
};

class Fish : public Animal{
	public:
		virtual void breathe(){
			std::cout << "Oddycha skrzelami\n";
		}
		void swim(){
			std::cout << "P³yñ\n";
		}
};

class Mammal : public Animal{
	public:
		virtual void breathe(){
			std::cout << "Zwierzê oddycha\n";
		}
		void run(){
			std::cout << "Biegnij\n";
		}
}; 

class Bird : public Animal{
	public:
		virtual void breathe(){
			std::cout << "Zwierzê oddycha\n";
		}
		void fly(){
			std::cout << "Leæ\n";
		}
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Fish karp;
	Animal *wsk = &karp;
	wsk->breathe();
	
	Bird gawron;
	wsk = &gawron;
	wsk->breathe();
	

	return 0;
}
