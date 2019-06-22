#pragma once

#include <math.h>
#include <vector>
#include <time.h>

#define PI 3.1415926535897932384626433832795

class GRN
{
public:
	std::vector<double> RN_init_1;
	std::vector<double> RN_init_2;
	std::vector<double> RN_IFM;

	double A;
	double B;
	int N_RN;
	int seed;

	GRN() {}
	GRN(int N, int A_in, int B_in, int seed_in)
	{
		N_RN = N;
		A = A_in;
		B = B_in;
		seed = seed_in;
		if (seed == 0)
			srand(time(0));
		else
			srand(seed);

		Reload();
	}
	~GRN() {}

	double IFM(double x, double y)
	{
		// Boks - Muller change
		return sqrt(B) * sin(2 * PI * y) * sqrt(-2 * log(x)) + A;
	}

	void Reload()
	{
		RN_init_1.clear();
		RN_init_2.clear();
		RN_IFM.clear();

		for (int i = 0; i < N_RN; i++)
		{
			RN_init_1.push_back(((double)rand() + 1.0) / ((double)RAND_MAX + 1.0));
			RN_init_2.push_back(((double)rand() + 1.0) / ((double)RAND_MAX + 1.0));

			RN_IFM.push_back(IFM(RN_init_1[i], RN_init_2[i]));
		}
	}
};
