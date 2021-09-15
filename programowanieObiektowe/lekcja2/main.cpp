#include <iostream>
using namespace std;




class Worker{
	//delaracja zmiennych czlonkowskich (wlasciwosci)
	public:
	string name;
	string surname;
	string nationality;
	unsigned short int yearBirthday;
	char gender;
	
	//definicja funkcji czlonkowskiej (metoda)
	void showName(){
		cout << "Imi�: " << name << endl;
	};
	
	//deklaracja (prototyp) metody
	void showSurname();
	string showPersonality();
	void showAllData();
	
};

void Worker::showSurname(){
	cout << "Nazwisko: " << surname << endl;
}
string Worker::showPersonality(){
	return  "Imi� i nazwisko :" + name + " " + surname;
}
void Worker::showAllData(){
	cout << "Dane pracownika:\n" << Worker::showPersonality()
	<< "\nNarodowo�� :" << nationality
	<< "\nRok urodzenia: " << yearBirthday << "r."
	<<"\nP�e�: ";
	
	switch(gender){
		case 'm':
			cout << "m�czyzna\n";
		break;
		case 'w':
			cout << "kobieta\n";
		break;
		default:
		cout << "-\n";
		break;
	}
}



int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Polish");
	
	Worker pracownik;
	pracownik.name = "Janusz";
	pracownik.surname = "Kowalski";
	pracownik.nationality = "Polska";
	pracownik.yearBirthday = 2005;
	pracownik.gender = 'f';
	

	pracownik.showPersonality();
	pracownik.showAllData();
	
	
	
	return 0;
}
