#include "mytools.hpp"

mytools::mytools()
{
	data = 10;
}

std::string mytools::GetName()
{
	return "[" + name + "] : ";
}
