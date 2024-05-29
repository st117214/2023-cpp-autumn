#include <iostream>
#include "parcingfunctions.h"
#include <sstream>
#include <string>
#include <cctype>
#include <fstream>
#include <cstdlib>
#include "ConsoleAppMenu.h"

class QuadraticCurve 
{
private:
	double a, b, c, d, e, f;

public:
	QuadraticCurve(double a, double b, double c, double d, double e, double f) : a(a), b(b), c(c), d(d), e(e), f(f) {}

	double calculateI1() const 
	{
		return a + c;
	}

	double calculateI2() const 
	{
		return a * c - (b / 2) * (b / 2);
	}

	double calculateI3() const 
	{
		return a * (c * f - e) - b * (b * f - e * d) + d * (b * e - c * d);
	}

	double calculateI4() const 
	{
		return (a * f - d * d) + (c * f - e * e);
	}

	std::string determineCurveType() const 
	{
		double I = calculateI1();
		double D = calculateI2();
		double A = calculateI3();
		double K = calculateI4();

		if ((D != 0) && (D > 0) && (I * A < 0)) 
		{
			return "Ellipse";
		}
		else if ((D != 0) && (D > 0) && (A == 0)) 
		{
			return "Point (a pair of imaginary intersecting lines)";
		}
		else if ((D != 0) && (D > 0) && (I * A > 0)) 
		{
			return "An imaginary ellipse";
		}
		else if ((D != 0) && (D < 0)) 
		{
			if (A != 0) 
			{
				return "Hyperbole";
			}
			else 
			{
				return "A pair of intersecting lines";
			}
		}
		else if ((D == 0) && (A != 0)) 
		{
			return "Parabola";
		}
		else if ((D == 0) && (A == 0) && (K == 0)) 
		{
			return "A straight line";
		}
		else if ((D == 0) && (A == 0) && (K > 0)) 
		{
			return "A pair of imaginary intersecting lines";
		}
		else if ((D == 0) && (A == 0) && (K < 0)) 
		{
			return "A pair of parallel lines";
		}
		else 
		{
			return "Unknown curve";
		}
	}

	void generateLatexFile(const std::string& equation, const std::string& curveType) const 
	{
		std::ofstream out("quadratic_curve.tex");
		out << "\\documentclass{article}\n";
		out << "\\usepackage{amsmath}\n";
		out << "\\begin{document}\n";
		out << "\\section*{Quadratic Equation}\n";
		out << "The quadratic equation is: \n";
		out << "\\[ " << equation << " \\]\n";
		out << "\\section*{Coefficient Matrix}\n";
		out << "The coefficient matrix is: \n";
		out << "\\[\n";
		out << "\\begin{pmatrix}\n";
		out << a << " & " << b / 2 << " & " << d / 2 << " \\\\\n";
		out << b / 2 << " & " << c << " & " << e / 2 << " \\\\\n";
		out << d / 2 << " & " << e / 2 << " & " << f << "\n";
		out << "\\end{pmatrix}\n";
		out << "\\]\n";
		out << "\\section*{Curve Type}\n";
		out << "The type of the curve is: " << curveType << "\n";
		out << "\\end{document}\n";
	}
};


int main(int argc, char* argv[]) 
{
	std::cout << "Defining the type of Second-Order Curve" << std::endl << "----------------------" << std::endl;
	std::cout << "Quadratic coefficients: a, b, c, d, e, f" << std::endl << "----------------------" << std::endl;
	bool exit = false;

	while (!exit) 
	{
		printMenu();
		int choice;
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		std::cin.ignore();

		switch (choice) 
		{
		case 1:
			exit = true;
			break;

		case 2: 
		{
			std::string equation;
			std::cout << "Enter the quadratic form: ";
			std::getline(std::cin, equation);

			equation = removeSpaces(equation);

			double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

			std::string term;
			std::istringstream iss(equation);
			while (std::getline(iss, term, '+')) 
			{
				if (!term.empty()) 
				{
					size_t minusPos = term.find('-');
					if (minusPos != std::string::npos && minusPos != 0) 
					{
						std::string firstPart = term.substr(0, minusPos);
						std::string secondPart = term.substr(minusPos);
						parseTerm(firstPart, a, b, c, d, e, f);
						parseTerm(secondPart, a, b, c, d, e, f);
					}
					else 
					{
						parseTerm(term, a, b, c, d, e, f);
					}
				}
			}

			std::cout << "a = " << a << std::endl;
			std::cout << "b = " << b << std::endl;
			std::cout << "c = " << c << std::endl;
			std::cout << "d = " << d << std::endl;
			std::cout << "e = " << e << std::endl;
			std::cout << "f = " << f << std::endl;

			b = b / 2;
			d = d / 2;
			e = e / 2;

			QuadraticCurve curve(a, b, c, d, e, f);
			std::string curveType = curve.determineCurveType();
			std::cout << "Curve Type: " << curveType << std::endl;

			curve.generateLatexFile(equation, curveType);

			system("pdflatex quadratic_curve.tex");

			break;
		}

		default:
			std::cout << "Invalid choice, please try again." << std::endl;
			break;
		}
	}

	return EXIT_SUCCESS;
}
