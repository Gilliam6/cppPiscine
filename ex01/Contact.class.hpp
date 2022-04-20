#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>

class Contact
{
public:

	std::string fName;
	std::string lName;
	std::string nickName;
	std::string phoneNum;
	std::string secret;
	Contact(void);
	~Contact(void);
	void displayContact(Contact index);
	void displayLine(Contact index, int i);

};

#endif