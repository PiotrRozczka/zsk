#include <iostream>
using namespace std;

class BaseClass{
	public:
		virtual void b()=0;
};

class ChildClass: public BaseClass{
	virtual void b(){
		cout << "ChildClass::b\n";
	}
	
};

int main(){
	setlocale(LC_CTYPE,"polish");
	
//	BaseClass rodzic;
//	rodzic.b();
	
	ChildClass childClass;
	BaseClass *baseClass = &childClass;
	baseClass->b();
	
	return 0;
}
