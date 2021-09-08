#include <iostream>
using namespace std;




class Worker{
	//delaracja zmiennych czlonkowskich (wlasciwosci)
	public:
	string name = "Janusz";
	string surname;
	
	//definicja funkcji czlonkowskiej (metoda)
	void showData(){
		cout << "Imiê";
	};
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker pracownik;
	
	cout << pracownik.name << endl;
	pracownik.showData();

	
	return 0;
}
