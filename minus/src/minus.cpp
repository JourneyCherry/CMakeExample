#include "minus.hpp"

void MyOperator::Calc()
{
	name = "minus";
	data -= delta;
}

void MyOperator::Show()
{
	std::cout << GetName() << data << std::endl;
}
