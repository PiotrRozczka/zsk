#include <iostream>

using namespace std;

class Worker{
	public:
		int id {8};
		string name {"Katarzyna"};
		string surname {"Nowak"};
		
		Worker();
		Worker(int pId, string pName, string pSurname);
		
		void getData();
		
};

Worker::Worker(){
	id=13;
	name="DOMYŚLNE IMIĘ";
	surname="DOMYŚLNE NAZWISKO";
}

Worker::Worker(int pId, string pName, string pSurname){
	id = pId;
	surname = pSurname;
	name = pName;
}

void Worker::getData(){
	cout<<"Id: " << id << "\nImię: " << name << ", nazwisko: " << surname << endl;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	Worker nowak;
	nowak.getData();
	
	Worker nowak2 = Worker();
	nowak2.getData();
	
	Worker nowak1 = Worker(10, "Krystyna", "Pawlak");
	nowak1.getData();
	
	return 0;
}
