#include "Region1.h"

#define DLL_EXPORT __declspec(dllexport)

//properties as a function of temperature and pressure

DLL_EXPORT double v_T_P(double temp, double press)
{
	return v_R1_T_P(temp, press);
}
DLL_EXPORT double u_T_P(double temp, double press)
{
	return u_R1_T_P(temp, press);
}
DLL_EXPORT double s_T_P(double temp, double press)
{
	return s_R1_T_P(temp, press);
}
DLL_EXPORT double h_T_P(double temp, double press)
{
	return h_R1_T_P(temp, press);
}
DLL_EXPORT double cp_T_P(double temp, double press)
{
	return cp_R1_T_P(temp, press);
}
DLL_EXPORT double cv_T_P(double temp, double press)
{
	return cv_R1_T_P(temp, press);
}
DLL_EXPORT double w_T_P(double temp, double press)
{
	return w_R1_T_P(temp, press);
}

//properties as a function of pressure and enthalpy

DLL_EXPORT double v_P_h(double press, double enthalpy)
{
	return v_R1_P_h(press, enthalpy);
}
DLL_EXPORT double u_P_h(double press, double enthalpy)
{
	return u_R1_P_h(press, enthalpy);
}
DLL_EXPORT double s_P_h(double press, double enthalpy)
{
	return s_R1_P_h(press, enthalpy);
}
DLL_EXPORT double T_P_h(double press, double enthalpy)
{
	return T_R1_P_h(press, enthalpy);
}
DLL_EXPORT double cp_P_h(double press, double enthalpy)
{
	return cp_R1_P_h(press, enthalpy);
}
DLL_EXPORT double cv_P_h(double press, double enthalpy)
{
	return cv_R1_P_h(press, enthalpy);
}
DLL_EXPORT double w_P_h(double press, double enthalpy)
{
	return w_R1_P_h(press, enthalpy);
}

//properties as a function of pressure and entropy

DLL_EXPORT double v_P_s(double press, double entropy)
{
	return v_R1_P_s(press, entropy);
}
DLL_EXPORT double u_P_s(double press, double entropy)
{
	return u_R1_P_s(press, entropy);
}
DLL_EXPORT double h_P_s(double press, double entropy)
{
	return h_R1_P_s(press, entropy);
}
DLL_EXPORT double T_P_s(double press, double entropy)
{
	return T_R1_P_s(press, entropy);
}
DLL_EXPORT double cp_P_s(double press, double entropy)
{
	return cp_R1_P_s(press, entropy);
}
DLL_EXPORT double cv_P_s(double press, double entropy)
{
	return cv_R1_P_s(press, entropy);
}
DLL_EXPORT double w_P_s(double press, double entropy)
{
	return w_R1_P_s(press, entropy);
}

//properties as a function of enthalpy and entropy

DLL_EXPORT double v_h_s(double enthalpy, double entropy)
{
	return v_R1_h_s(enthalpy, entropy);
}
DLL_EXPORT double u_h_s(double enthalpy, double entropy)
{
	return u_R1_h_s(enthalpy, entropy);
}
DLL_EXPORT double P_h_s(double enthalpy, double entropy)
{
	return P_R1_h_s(enthalpy, entropy);
}
DLL_EXPORT double T_h_s(double enthalpy, double entropy)
{
	return T_R1_h_s(enthalpy, entropy);
}
DLL_EXPORT double cp_h_s(double enthalpy, double entropy)
{
	return cp_R1_h_s(enthalpy, entropy);
}
DLL_EXPORT double cv_h_s(double enthalpy, double entropy)
{
	return cv_R1_h_s(enthalpy, entropy);
}
DLL_EXPORT double w_h_s(double enthalpy, double entropy)
{
	return w_R1_h_s(enthalpy, entropy);
}