#pragma once

#include <iostream>

class LibMat
{
public:
	LibMat() { std::cout << "LibMat::LibMat() default constructor! \n"; }

	virtual ~LibMat() { std::cout << "LibMat::~LibMat() default destructor! \n"; }
	virtual void print()const
	{
		std::cout << "LibMat::print() -- I am a LibMat object! \n";
	}
};

