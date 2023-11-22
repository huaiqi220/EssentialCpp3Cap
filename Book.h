#pragma once
#include "LibMat.h"
#include <string>

class Book : public LibMat
{
public:
	Book(const std::string& title, const std::string& author)
		: _title(title), _author(author) {
		std::cout << "Book::Book(" << title
			<< "," << _author << ") constructor \n";
	}

	virtual ~Book() {
		std::cout << "Book::Book destructor! \n";
	}

	virtual void print() const {
		std::cout << "Book::print() -- I am a Book object! \n"
			<< "My title is: " << _title << '\n'
			<< "My author is: " << _author << std::endl;
	}

	const std::string& title() const { return _title; }
	const std::string& author() const { return _author; }




protected:
	std::string _title;
	std::string _author;
};

