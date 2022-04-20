#include "PhoneBook.hpp"
void transformLine(std::string line);
Contact::Contact(void)
{
//	std::cout<<"Constructor is called!"<<std::endl;
	return;
}

Contact::~Contact(void )
{
//	std::cout<<"Destructor is called!"<<std::endl;
	return;
}

void Contact::displayContact(Contact index)
{
	std::cout << "First name: " << index.fName << endl;
	std::cout << "Last name: "<< index.lName << endl;
	std::cout << "Nick name: "<< index.nickName << endl;
	std::cout << "Phone number: "<< index.phoneNum << endl;
	std::cout << "Dark secret: " << index.secret << endl;
	return;
}

void Contact::displayLine(Contact index, int i)
{
	cout << std::right << std::setw(10) << i << "|";
	transformLine(index.fName);
	transformLine(index.lName);
	transformLine(index.nickName);
	cout << "\n";
}


