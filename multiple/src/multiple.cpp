#include "multiple.hpp"

void MyOperator::Calc()
{
	name = "multiple";
	data *= delta;
}

void MyOperator::Show()
{
	std::cout << GetName() << data << std::endl;
}
