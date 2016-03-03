#pragma once

class QuadraticEquation {
	private:
		double a;
		double b;
		double c;

	public:
		QuadraticEquation(double a, double b, double c) {
			this->a = a;
			this->b = b;
			this->c = c;
		}
		
		double getA()
		{
			return a;
		}

		double getB()
		{
			return b;
		}

		double getC() {
			return c;
		}

		double getDiscriminent() {
			double discriminent = ((b*b) - (4 * a*c));
			return discriminent;
		}

		double getRoot1() {
			if (getDiscriminent() < 0)
			{
				return 0;
			}
			else
			{
				double rootOne = ((-b + (((b*b) - 4 * a *c)*(1 / 2))) / (2 * a));
				return rootOne;
			}
		}


		double getRoot2() 
		{
			if (getDiscriminent() < 0)
			{
				return 0;
			}
			else
			{
				double rootTwo = ((-b - (((b*b) - 4 * a *c)*(1 / 2))) / (2 * a));
				return rootTwo;
			}
		}

	};	