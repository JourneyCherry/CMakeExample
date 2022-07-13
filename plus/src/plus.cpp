#include "plus.hpp"

void MyOperator::Calc()
{
	name = "plus";
	data += delta;
}

void MyOperator::Show()
{
	std::cout << GetName() << data << std::endl;
}
