#include <iostream>
using namespace std;

class Food{
	public:
		string name {""};
		string type {""};
		string color {""};
};

class Meat: public Food{
	public:
		string meat_type {""};
		
	void getData();
};

class Fruit: public Food{
	public:
		string fruit_type {""};
		string country_from {""};
		bool is_sweet {true};
		
		void getData();
};

void Meat::getData(){
	cout << "Name: " << name
	<<"\nType: " << type
	<<"\nColor: " << color
	<<"\nMeat type: " << meat_type << "\n";
}

void Fruit::getData(){
	string isSweet;
	switch(is_sweet){
		case true:
			isSweet = "tak";
			break;
		case false:
			isSweet = "nie";
			break;
	}
	cout << "Name: " << name
	<<"\nType: " << type
	<<"\nColor: " << color
	<<"\nFruit type: " << fruit_type
	<<"\nCountry: " << country_from
	<<"\nIs sweet:" << is_sweet << "\n";
}



int main(){
	setlocale(LC_CTYPE,"polish");
	
	Meat wolowina;
	wolowina.name = "wo³owina";
	wolowina.type="miêso";
	wolowina.color="czerwony";
	wolowina.meat_type="antrykot";
	
	cout << "\n";
	
	wolowina.getData();
	
	Fruit cytryna;
	cytryna.name = "cytryna";
	cytryna.type="owoc";
	cytryna.color = "¿ó³ty";
	cytryna.fruit_type = "cytrus";
	cytryna.country_from = "grecja";
	cytryna.is_sweet = false;
	cytryna.getData();
	
	
	return 0;
}
