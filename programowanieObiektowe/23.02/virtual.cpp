#include <iostream>
using namespace std;

class Parent{
	public:
		void show(){
			cout << "Metoda bazowa\n";
		}
};

class Child : public Parent{
	public:
		void show(){
			cout << "Metoda pochodna\n";
		}
};

int main(){
	setlocale(LC_CTYPE,"polish");
	
	Parent *bazowa = new Child();
	Child *pochodna = new Child();
	
	bazowa->show();
	pochodna->show();
	
	bazowa = new Parent();
	bazowa->show();	
	
	return 0;
}
