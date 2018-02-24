#include<iostream>


class Singleton final // final will stop inheritance
{
private:
	int val;
	Singleton() = default; //without this code will note compile
	~Singleton() = default;
 
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;
	Singleton& operator=(Singleton&&) = delete;

public:
	static Singleton& GetInstance();
	int getval(){ return val;}
	void setval(int x){ val = x;}
};
 
Singleton& Singleton::GetInstance()
{
	static Singleton instance;
	return instance;
}

int main(){
  
	Singleton & obj1 = Singleton::GetInstance();
	Singleton & obj2 = Singleton::GetInstance();
	obj1.setval(10);
	std::cout << obj1.getval() << std::endl;
	std::cout << obj2.getval() << std::endl;
	obj2.setval(20);
	std::cout << obj1.getval() << std::endl;
	std::cout << obj2.getval() << std::endl;

}
