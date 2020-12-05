#include "functions.h"

int functions::exampleFunction(int x, int y) { //[Return value] [name of header included at the top]::[name of function]([values defined])
	return x + y; //Example sum function
}

void functions::printThings(std::string x) { 
	std::cout << "The string passed to this method is " << x << std::endl; //Example print function
}