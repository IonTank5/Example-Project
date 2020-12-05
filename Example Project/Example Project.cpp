// Example Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "functions.h"
int main()
{
    //Example code
    functions f; //Calling functions "f" to make calling the functions from functions.h easier
    int x = 10, y = 15; //Defining variables
    int sum = f.exampleFunction(x, y); //Calling the exampleFunction that was prototyped in functions.h and runs in functions.cpp
    std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl; //Printing the result of the function

    std::string name = "Alexei";
    f.printThings(name);
}