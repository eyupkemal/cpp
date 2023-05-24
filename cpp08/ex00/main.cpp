#include "easyfind.hpp"
int main() {

	try
	{
		std::vector<int> v1(2,10);
		std::cout << *easyfind(v1, 10) << std::endl;
		v1.push_back(99);
		v1.push_back(3);
		std::cout << *easyfind(v1, 3) << std::endl;
		std::cout << *easyfind(v1, 23) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}