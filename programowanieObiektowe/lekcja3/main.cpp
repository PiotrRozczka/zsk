#include <iostream>
using namespace std;

class Rectangle{
	public:
		float a;
		float b;
		
		float calculateField();
		float calculateCircuit();
		void displayData();
};

float Rectangle::calculateField(){
	return a*b;
};
float Rectangle::calculateCircuit(){
	return a*2+b*2;
};
void Rectangle::displayData(){
	cout << "Pole wynosi: " << calculateField() << "\n"
	<< "Obw�d wynosi: " << calculateCircuit() << "\n"
	<< "Bok a: " << a << " Bok b: " << b << endl;
}



int main(){
	setlocale(LC_CTYPE, "Polish");
 Rectangle rectangle;
 
 cout << "Podaj warto�� boku a: ";
 cin >> rectangle.a;
 
 cout << "Podaj warto�� boku b: ";
 cin >> rectangle.b;
 
 cout << "\n";
 
 rectangle.displayData();

	return 0;
}
