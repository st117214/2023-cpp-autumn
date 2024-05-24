#include <iostream>
#include "invariantcounting.h"

int main(int argc, char* argv[])
{
	std::cout << "Defining the type of Second-Order Curve" << std::endl << "----------------------" << std::endl;
	std::cout << " Quadratic coefficients: a, b, c, d, e, f" << std::endl << "----------------------" << std::endl;
	std::cout << "Enter the coefficient data value for ax^2 + bxy + cy^2 + dx + ey + f" << std::endl;

	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double e = 0;
	double f = 0;

	std::cin >> a >> b >> c >> d >> e >> f;

	b = b / 2;
	d = d / 2;
	e = e / 2;

	double I = 0;
	double D = 0;
	double A = 0;
	double K = 0;


	I = invariantI1(a, c, I);
	D = invariantI2(a, b, c, D);
	A = invariantI3(a, b, c, d, e, f, A);
	K = invariantI4(a, c, d, e, f, K);

	if ((D != 0) && (D > 0) && (I * A < 0))
	{
		std::cout << "Ellipse" << std::endl;
	}
	
	if ((D != 0) && (D > 0) && (A == 0))
	{
		std::cout << "Point(a pair of imaginary intersecting lines) " << std::endl;
	}

	if ((D != 0) && (D > 0) && (I * A > 0))
	{
		std::cout << "An imaginary ellipse " << std::endl;
	}

	if ((D != 0) && (D < 0))
	{
		if (A != 0)
		{
			std::cout << "hyperbole" << std::endl;
		}
		else
		{
			std::cout << "a pair of intersecting lines" << std::endl;
		}
	}

	if ((D == 0) && (A != 0))
	{
		std::cout << "parabola" << std::endl;
	}

	if ((D == 0) && (A == 0) && (K == 0))
	{
		std::cout << "a straight line" << std::endl;
	}

	if ((D == 0) && (A == 0) && (K > 0))
	{
		std::cout << "a pair of imaginary intersecting lines" << std::endl;
	}

	if ((D == 0) && (A == 0) && (K < 0))
	{
		std::cout << "a pair of parallel lines " << std::endl;
	}

	return EXIT_SUCCESS;
}
