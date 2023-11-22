#pragma once
#include "Book.h"

class AudioBook : public Book
{
public:
	AudioBook(const std::string& title,
		const std::string& author, const std::string& narrator)
		: Book(title, author), _narrator(narrator)
	{
		std::cout << "AudioBook::AudioBook( " << _title
			<< ", " << _author
			<< ", " << _narrator
			<< ") constructor \n";
	}

	~AudioBook()
	{
		std::cout << "AudioBook::~AudioBook() destructor! \n";
	}

	virtual void print() const
	{
		std::cout << "AudioBook::print() -- I am an AudioBook object! \n"
			<< "My title is: " << _title << '\n'
			<< "My author is: " << _author 
			<< "My narrator is: " << _narrator << std::endl;
	}

	const std::string& narrator() const { return _narrator; }


protected:
	std::string _narrator;

};

