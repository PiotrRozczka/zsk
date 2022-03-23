class Dog : public Animal{
	public:
		std::string className {"Dog"};
		void speak() override{
			std::cout << "Woof\n";
		}
};

