#include "PhoneBook.hpp"

int ft_stoi(string len)
{
	int final = 0;
	int i = -1;
	while(len[++i])
	{
		final *= 10;
		final += len[i] - '0';
	}
	return (final);
}

void transformLine(string line)
{
	string new_line = line;
	if (line.length() >= 10)
	{
		new_line = new_line.substr(0, 9);
		new_line.push_back('.');
	}
	cout << std::right << std::setw(10) << new_line << "|";
}

int checkLen(string len)
{
	int i = -1;
	while (len[++i])
	{
		if (!isdigit(len[i]))
			return (-1);
	}
	return(ft_stoi(len));
}

int main( void )
{
	PhoneBook book;
	string lol;

	while (!book.fexit)
	{
		getline(cin, lol);
		if (!lol.compare("ADD"))
			book.add(book.list);
		else if (!lol.compare("EXIT"))
			book.exit();
		else if (!lol.compare("SEARCH"))
			book.search();
		else
		{
			cout << "Wrong command: "<<lol<<" Please type: ADD, SEARCH, "
												 "EXIT" << endl;
		}
	}
	return(0);
}

