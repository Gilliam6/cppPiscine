#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
//	std::cout<<"Constructor is called!"<<std::endl;
	this->fexit = 0;
	this->_cNums = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
//	std::cout << "Destructor is called!" << std::endl;
	return;
}

void PhoneBook::add( Contact *list )
{
	Contact instance;

	cout << "First name: ";
	std::getline(cin, instance.fName);
	cout << "Last name: ";
	std::getline(cin, instance.lName);
	cout << "Nick name: ";
	std::getline(cin, instance.nickName);
	cout << "Phone number: ";
	std::getline(cin, instance.phoneNum);
	cout << "Dark secret: ";
	std::getline(cin, instance.secret);
	if (this->_cNums <= 7)
	{
		this->list[_cNums] = instance;
		this->_cNums++;
	}
	else
	{
		int i = -1;
		if (_cNums == 8)
			while (++i < 7)
				list[i] = list[i + 1];
		this->list[_cNums - 1] = instance;
	}
	return;
}

void PhoneBook::exit()
{
	this->fexit = 1;
}

void PhoneBook::search()
{
	string len;
	int i = -1;
	cout << std::right << std::setw(10) << "INDEX" << "|";
	cout << std::right << std::setw(10) << "FIRST NAME" << "|";
	cout << std::right << std::setw(10) << "LAST NAME" << "|";
	cout << std::right << std::setw(10) << "NICK NAME" << "|\n";
	while (++i < _cNums)
		this->list->displayLine(this->list[i], i);
	cout << "INPUT INDEX:\n";
	getline(cin, len);
	i = checkLen(len);
	if (i >= 0 && i < this->_cNums)
		this->list->displayContact(this->list[i]);
	else
		cout << "WRONG INDEX!\n";
}

