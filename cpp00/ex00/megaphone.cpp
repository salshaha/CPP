#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
	int i;
	int j;
	std::string str;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (i < argc)
	{
		j = 0;
		std::string a = argv[i];
		while (a[j])
		{
			str += (char)toupper(a[j]);
			j++;
		}
		i++;
	}
	std::cout << str << std::endl;
	return 0;
}