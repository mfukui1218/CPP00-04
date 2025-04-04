#include <string>
#include <iostream>
#include <fstream>

std::string replaceAll(std::string& content, const std::string& s1, const std::string& s2)
{
	size_t		pos;
	size_t		found;
	std::string	result;

	if(s1.empty())
		return (content);
	pos = 0;
	while((found = content.find(s1, pos)) != std::string::npos)
	{
		result.append(content, pos, found - pos);
		result.append(s2);
		pos = found + s1.length();
	}
	result.append(content, pos);
	return (result);
}

int main(int argc, char** argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::string	replace;

	if(argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream	inputFile(filename);
	if (!inputFile)
	{
		std::cerr << "Error: Cannot open file " << filename << std::endl;
		return (1);
	}
	std::string	content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
	inputFile.close();
	replace = replaceAll(content, s1, s2);
	std::ofstream	outputFile(filename + ".replace");
	if (!outputFile)
	{
		std::cerr << "Error: Cannot create output file." << std::endl;
		return (1);
	}
	outputFile << replace;
	outputFile.close();
	std::cout << "File " << filename << ".replace created successfully." << std::endl;
	return 0;
}
