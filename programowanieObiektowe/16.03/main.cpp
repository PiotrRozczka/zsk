#include <iostream>

class c1{
	int a,b,c;
	virtual void f(){
		std::cout << "Funkcja\n";
	}
};

class c2{
	int a,b,c;
	void f(){
		std::cout << "Funkcja\n";
	}
};

class c3{
	int a,b,c;
	void f1(){
		std::cout << "Funkcja 1\n";
	}
	void f2(){
		std::cout << "Funkcja 2\n";
	}
	void f3(){
		std::cout << "Funkcja 3\n";
	}
};


int main(){
	setlocale(LC_CTYPE, "polish");
	
	c1 *wsk1 = new c1;
	std::cout << sizeof(*wsk1) << "\n";
	
	c2 *wsk2 = new c2;
	std::cout << sizeof(*wsk2) << "\n";
	
	c3 *wsk3 = new c3;
	std::cout << sizeof(*wsk3) << "\n";
	
	std::cout << "Typ int zajmuje " << sizeof(int) << "\n";
	std::cout << "Typ char zajmuje " << sizeof(char) << "\n";
	std::cout << "Typ string zajmuje " << sizeof(std::string) << "\n";
	std::cout << "Typ float zajmuje " << sizeof(float) << "\n";
	std::cout << "Typ double zajmuje " << sizeof(double) << "\n";
	std::cout << "Typ boolean zajmuje " << sizeof(bool) << "\n";
	
	
	return 0;
}
