#include <iostream>

using namespace std;

class Worker{
	public:
		int id {8};
		string name {"Katarzyna"};
		string surname {"Nowak"};
		
		Worker(int pId=1, string pName="NAME", string pSurname="SURNAME");
		
		void getData();
		
};

Worker::Worker(int pId, string pName, string pSurname){
	id = pId;
	surname = pSurname;
	name = pName;
}

void Worker::getData(){
	cout<<"Id: " << id << "\nImiê: " << name << ", nazwisko: " << surname << endl;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	Worker nowak = Worker();
	
	nowak.getData();
	
	Worker nowak1 = Worker(10, "Krystyna", "Pawlak");
	
	nowak1.getData();
	
	return 0;
}
