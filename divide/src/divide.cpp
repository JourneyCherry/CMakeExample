#include "divide.hpp"

void MyOperator::Calc()
{
	name = "divide";
	data /= delta;
}

void MyOperator::Show()
{
	std::cout << GetName() << data << std::endl;
}
