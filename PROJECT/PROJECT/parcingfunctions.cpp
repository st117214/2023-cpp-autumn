#include "parcingfunctions.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

std::string removeSpaces(const std::string& str)
{
	std::string result;

	for (char ch : str) 
	{
		if (!isspace(ch)) 
		{
			result += ch;
		}
	}

	return result;
}

void parseTerm(const std::string& term, double& a, double& b, double& c, double& d, double& e, double& f) 
{
	double coefficient = 1.0;
	size_t pos = 0;

	if (term[0] == '-') 
	{
		coefficient = -1.0;
		pos = 1;
	}
	else if (term[0] == '+') {
		pos = 1;
	}

	if (isdigit(term[pos]) || term[pos] == '.') 
	{
		size_t len;
		coefficient *= std::stod(term.substr(pos), &len);
		pos += len;
	}

	if (term.find("x^2", pos) != std::string::npos) 
	{
		a += coefficient;
	}
	else if (term.find("y^2", pos) != std::string::npos) 
	{
		c += coefficient;
	}
	else if (term.find("xy", pos) != std::string::npos) 
	{
		b += coefficient;
	}
	else if (term.find("x", pos) != std::string::npos) 
	{
		d += coefficient;
	}
	else if (term.find("y", pos) != std::string::npos) 
	{
		e += coefficient;
	}
	else 
	{
		f += coefficient;
	}
}
