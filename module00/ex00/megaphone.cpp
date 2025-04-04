#include <iostream>
#include <cctype>
#include <cstddef>

int	main(int argc, char **argv)
{
	size_t	i;
	size_t	j;
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	i = 1;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
