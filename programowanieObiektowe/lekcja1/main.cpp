#include <iostream>
using namespace std;




class Worker{
	//delaracja zmiennych czlonkowskich (wlasciwosci)
	public:
	string name = "Janusz";
	string surname;
	unsigned short int age;
	
	//definicja funkcji czlonkowskiej (metoda)
	void showData(){
		cout << "Imi�" << endl;
	};
	
	void showName(){
		cout << name << endl;
	}
};



int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker pracownik;
	
	cout << pracownik.name << endl;
	pracownik.showData();
	pracownik.surname = "Kowalski";
	pracownik.name = "Andrzej";
	cout << "Imi� i nazwisko: \n" << pracownik.name << " "<< pracownik.surname << endl;
	pracownik.age = 16;
	cout << "Wiek wynosi: " << pracownik.age << endl;
	pracownik.showName();
	
	return 0;
}
