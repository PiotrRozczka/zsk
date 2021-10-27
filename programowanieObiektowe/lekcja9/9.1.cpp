#include <iostream>
using namespace std;

class Worker{
	public:
		int id {8};
		string name {"Katarzyna"};
		string surname {"Nowak"};
		
		Worker(int pId = 1, string pName = "Name", string pSurname = "Surname");
		
		void getData();
		
		
};

	Worker::Worker(int pId, string pName, string pSurname){
		
		id=pId;
		name=pName;
		surname=pSurname;
		
	};
void Worker::getData(){
		cout << "Id: " << id << "\nImiê: " << name << "\nNazwisko: " << surname << endl;
	}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak1 = Worker(10, "Krystyna", "Pawlak");
	nowak1.getData();
	
	return 0;
}
