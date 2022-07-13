#include <iostream>
#include "mytools.hpp"

#ifdef PLUS
#warning "Plus Included"
#include "plus.hpp"
#elif MINUS
#warning "Minus Included"
#include "minus.hpp"
#elif MULTIPLE
#warning "Multiple Included"
#include "multiple.hpp"
#elif DIVIDE
#warning "Divide Included"
#include "divide.hpp"
#else
#error "Nothing Included"
#endif

int main(int argc, char *argv[])
{
	MyOperator op;
	op.Calc();
	op.Show();

	return 0;
}
