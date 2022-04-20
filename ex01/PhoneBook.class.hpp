#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"
int checkLen(std::string len);

class PhoneBook
{
public:

	Contact list[8];
	int fexit;

	PhoneBook(void);
	~PhoneBook(void);

	void search(void);
	void exit(void);
	void add(Contact *list);
	void printLine(int index, std::string fname, std::string lname,
				   std::string nick);
private:
	int _cNums;
};
#endif
