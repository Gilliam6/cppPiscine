#include <iostream>

char *toUpper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		std::cout << toUpper(argv[1]) << std::endl;
	return (0);
}

