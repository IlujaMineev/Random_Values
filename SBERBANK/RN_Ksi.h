#pragma once

#include "RN.h"
#include <cmath>

class KSI
{
public:
	std::vector<double> RN_IFM;
	std::vector<double> frequency;

	std::vector<double> DF_IFM;

	double Expected_value;		// Mat ojidanie
	double Dispersion;			// Dispersiya
	double Swing;				// Razmah
	double Mode;				// Moda
	double Median;				// Mediana
	double MSE;					// Standartnoye otkloneniye
	double RN_IFM_Max;
	double RN_IFM_Min;

	double Stat_D;				// Raskhojdenie DF

	int N_RN;
	int N_Level;

	double A;
	double B;
	int N;

	KSI() {}
	KSI(int N_lvl, int N_in, double A_in, double B_in)
	{
		N_RN = 0;
		N_Level = N_lvl;
		RN_IFM.clear();

		Expected_value = 0.0;		// Mat ojidanie
		Dispersion = 0.0;			// Dispersiya
		Swing = 0.0;				// Razmah
		Mode = 0.0;					// Moda
		Median = 0.0;				// Mediana
		MSE = 0.0;					// Standartnoye otkloneniye
		RN_IFM_Max = 0.0;
		RN_IFM_Min = 0.0;

		A = A_in;
		B = B_in;
		N = N_in;
	}
	~KSI() {}

	void Push(double Add)
	{
		RN_IFM.push_back(Add);

		if (N_RN == 0)
		{
			RN_IFM_Min = Add;
			RN_IFM_Max = Add;
		}
		else
		{
			if (Add < RN_IFM_Min)
				RN_IFM_Min = Add;
			else
				if (Add > RN_IFM_Max)
					RN_IFM_Max = Add;
		}

		N_RN++;
	}

	void Calc_Expected_value()
	{
		Expected_value = 0;
		for (int i = 0; i < N_RN; i++)
			Expected_value += RN_IFM[i];
		Expected_value /= N_RN;
	}

	void Calc_Dispersion()
	{
		std::vector<double> Disp_hlp;
		Dispersion = 0;
		for (int i = 0; i < N_RN; i++)
			Disp_hlp.push_back((RN_IFM[i] - Expected_value) * (RN_IFM[i] - Expected_value));
		for (int i = 0; i < N_RN; i++)
			Dispersion += Disp_hlp[i];
		Dispersion /= N_RN;
	}

	void Calc_Median()
	{
		Median = RN_IFM[N_RN / 2];
	}

	void Calc_Swing()
	{
		Swing = RN_IFM_Max - RN_IFM_Min;
	}

	void Calc_MSE()
	{
		MSE = sqrt(Dispersion);
	}

	void Calc_Mode()
	{
		double Mode_return = 0.0;
		int Mode_iter = 0;

		for (int i = 0; i < N_Level; i++)
			if (frequency[i] > Mode_return)
			{
				Mode_return = frequency[i];
				Mode_iter = i;
			}

		Mode = RN_IFM_Min + (((RN_IFM_Max - RN_IFM_Min) / (double)N_Level) * (double)(Mode_iter)+((RN_IFM_Max - RN_IFM_Min) / (double)N_Level) * 0.5);
	}

	void Sort_RN_vect()
	{
		double key = 0.0;
		double k_in = 0.0;
		int i = 0;
		for (int j = 1; j < RN_IFM.size(); j++)
		{
			key = RN_IFM[j];
			i = j - 1;
			while (i >= 0 && RN_IFM[i] > key) {
				RN_IFM[i + 1] = RN_IFM[i];
				i = i - 1;
				RN_IFM[i + 1] = key;
			}
		}
	}

	void Calc_Freak()
	{
		int hlp = 0;
		int i = 0;
		frequency.resize(N_Level);

		for (int k = 0; ((k < N_Level) && (i < N_RN)); k++)
		{
			hlp = 0;
			while ((i < N_RN) && (RN_IFM[i] <= ((RN_IFM_Max - RN_IFM_Min) / (double)N_Level  * (k + 1) + RN_IFM_Min)))
			{
				hlp++;
				i++;
			}
			frequency[k] = (double)hlp / (double)N_RN;
		}
	}

	void Calc_All()
	{
		Sort_RN_vect();
		Calc_Freak();

		Calc_Expected_value();
		Calc_Dispersion();
		Calc_Median();
		Calc_Swing();
		Calc_MSE();
		Calc_Mode();
	}

	// Chi - square criterion

	double f_chi(double r, double x)
	{
		if (x > 0)
			return std::pow(x, r / 2 - 1) * exp(-x / 2) / tgamma(r / 2) / std::pow(2, r / 2);
		else
			return 0;
	}

	double F_R0_rev(double r, double x)
	{
		int n = (int)(x * 1000);
		double h = x / n;
		double res = 0.0;
		for (int i = 0; i < n; i++)
			res += (f_chi(r, i * h) + f_chi(r, (i + 1) * h)) * h / 2.0;
		return 1 - res;
	}

	double P_i_forXi(double L, double R)
	{
		return (Calc_DF_NRN(R) - Calc_DF_NRN(L));
	}

	bool Xi_Sqr_Check(double Alpha)
	{
		double R0 = 0.0;
		double stp = (RN_IFM_Max - RN_IFM_Min) / (double)N_Level;

		for (int i = 0; i < N_Level - 1; i++)
			R0 += (frequency[i] - (P_i_forXi(stp  * i + RN_IFM_Min, stp * (i + 1) + RN_IFM_Min))) * (frequency[i] - (P_i_forXi(stp  * i + RN_IFM_Min, stp * (i + 1) + RN_IFM_Min))) / (P_i_forXi(stp  * i + RN_IFM_Min, stp * (i + 1) + RN_IFM_Min));
		R0 *= N_RN;

		if (F_R0_rev(N_Level - 1, R0) > Alpha)	// KOSTYL
			return true;
		else
			return false;
	}

	// Normal distribution function

	double erf(double x)
	{
		// constants 
		double a1 = 0.254829592;
		double a2 = -0.284496736;
		double a3 = 1.421413741;
		double a4 = -1.453152027;
		double a5 = 1.061405429;
		double p = 0.3275911;

		// Save the sign of x 
		int sign = 1;
		if (x < 0)
			sign = -1;
		x = fabs(x);

		// A&S formula 7.1.26 
		double t = 1.0 / (1.0 + p*x);
		double y = 1.0 - (((((a5*t + a4)*t) + a3)*t + a2)*t + a1)*t*exp(-x*x);

		return sign*y;
	}

	double Calc_DF_NRN(double x)
	{
		return (0.5 * (1.0 + erf((x - A * N) / (sqrt(2 * B * N)))));
	}

	double f_detency(double x)
	{
		return (1.0 / (sqrt(B * N * 2 * PI)) * exp(-1.0 * (x - A * N) * (x - A * N) / (2.0 * B * N)));
	}
};