#include "Base.hpp"
Base * generate(void)
{
	srand(time(NULL));
	Base *result;
	int number = rand() % 3;
	switch (number)
	{
	case 0:
		std::cout << "A generated" << std::endl;
		result = new A();
		break;
	case 1:
		std::cout << "B generated" << std::endl;
		result = new B();
		break;
	case 2:
		std::cout << "C generated" << std::endl;
		result = new C();
		break;
	}
	return (result);
}

void	identify(Base* p)			  // yukaridaki new lerden hangisi oluştu ise o NULL döndürmeyecek.
{
	A *a = dynamic_cast<A *>(p);   	// esitleme yapamazsa dynamic_cast NULL döndürür. // staticcast de ama sorumluluk programcıia ait.
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "the type is A" << std::endl;
	else if (b)
		std::cout << "the type is B" << std::endl;
	else if (c)
		std::cout << "the type is C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "the Type is A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "the Type is B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "the Type is C" << std::endl;
	}
	catch (std::exception &e) {}
}


int main(void)
{
	Base *ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	//dynamic_cast ile bir nesnenin bir sınıf türüne dinamik bir şekilde dönüştürülebilmesi için kulllanılır ve
	// o nesne mutlaka polimorfik (polymorphic) sınıflardan biri olmalıdır.
}