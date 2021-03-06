#ifndef MATH_H
	#define MATH_H
	#include <math.h>
#endif

#ifndef REF_CONST_H
	#define REF_CONST_H
	#include "ReferenceConstants.h"
#endif

//Generic Equation for boundaries h1_prime(s) & h3a_prime(s)
double _gen_h1_prime_h3a_prime(double entr, const int numElements, const int* IArr,
    const int* JArr, const double* nArr)
{
    //kJ/kg
    const double hStar = 1700;
    //kJ/(kg*K)
    const double sStar = 3.8;

    double sigma = entr / sStar;
    double sum = 0;
    for (int i = 0; i < numElements; i++)
    {
        double calc = nArr[i] *
            pow(sigma - 1.09, IArr[i]) *
            pow(sigma + 0.366E-04, JArr[i]);
        sum = sum + calc;
    }

    return sum * hStar;
}

//Equation for h1_prime(s)
double _h1_prime(double entr)
{
	const int _I_h1_s_prime[27] = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 7, 8, 12, 12, 14, 14, 16, 20, 20, 22, 24, 28, 32, 32};
	const int _J_h1_s_prime[27] = {14, 36, 3, 16, 0, 5, 4, 36, 4, 16, 24, 18, 24, 1, 4, 2, 4, 1, 22, 10, 12, 28, 8, 3, 0, 6, 8};
	const double _n_h1_s_prime[27] = {0.332171191705237, 0.611217706323496E-03, -0.882092478906822E+01, -0.455628192543250, -0.263483840850452E-04, -0.223949661148062E+02, -0.428398660164013E+01, -0.616679338856916, -0.146823031104040E+02, 0.284523138727299E+03, -0.113398503195444E+03, 0.115671380760859E+04, 0.395551267359325E+03, -0.154891257229285E+01, 0.194486637751291E+02, -0.357915139457043E+01, -0.335369414148819E+01, -0.664426796332460, 0.323321885383934E+05, 0.331766744667084E+04, -0.223501257931087E+05, 0.573953875852936E+07, 0.173226193407919E+03, -0.363968822121321E-01, 0.834596332878346E-06, 0.503611916682674E+01, 0.655444787064505E+02};

    return _gen_h1_prime_h3a_prime(entr, 27, _I_h1_s_prime, _J_h1_s_prime, _n_h1_s_prime);
}

//Equation for h3a_prime(s)
double _h3a_prime(double entr)
{
	const int _I_h3a_s_prime[19] = {0, 0, 0, 0, 2, 3, 4, 4, 5, 5, 6, 7, 7, 7, 10, 10, 10, 32, 32};
	const int _J_h3a_s_prime[19] = {1, 4, 10, 16, 1, 36, 3, 16, 20, 36, 4, 2, 28, 32, 14, 32, 36, 0, 6};
	const double _n_h3a_s_prime[19] = {0.822673364673336, 0.181977213534479, -0.112000260313624E-01, -0.746778287048033E-03, -0.179046263257381, 0.424220110836657E-01, -0.341355823438768, -0.209881740853565E+01, -0.822477343323596E+01, -0.499684082076008E+01, 0.191413958471069, 0.581062241093136E-01, -0.165505498701029E+04, 0.158870443421201E+04, -0.850623535172818E+02, -0.317714386511207E+05, -0.945890406632871E+05, -0.139273847088690E-05, 0.631052532240980};

    return _gen_h1_prime_h3a_prime(entr, 19, _I_h3a_s_prime, _J_h3a_s_prime, _n_h3a_s_prime);
}

//Equation for h2ab_s_2prime(s)
double _h2ab_s_2prime(double entr)
{
	const int _I_h2ab_s_2prime[30] = {1, 1, 2, 2, 4, 4, 7, 8, 8, 10, 12, 12, 18, 20, 24, 28, 28, 28, 28, 28, 32, 32, 32, 32, 32, 36, 36, 36, 36, 36};
	const int _J_h2ab_s_2prime[30] = {8, 24, 4, 32, 1, 2, 7, 5, 12, 1, 0, 7, 10, 12, 32, 8, 12, 20, 22, 24, 2, 7, 12, 14, 24, 10, 12, 20, 22, 28};
	const double _n_h2ab_s_2prime[30] = {-0.524581170928788E+03, -0.926947218142218E+07, -0.237385107491666E+03, 0.210770155812776E+11, -0.239494562010986E+02, 0.221802480294197E+03, -0.510472533393438E+07, 0.124981396109147E+07, 0.200008436996201E+10, -0.815158509791035E+03, -0.157612685637523E+03, -0.114200422332791E+11, 0.662364680776872E+16, -0.227622818296144E+19, -0.171048081348406E+32, 0.660788766938091E+16, 0.166320055886021E+23, -0.218003784381501E+30, -0.787276140295618E+30, 0.151062329700346E+32, 0.795732170300541E+07, 0.131957647355347E+16, -0.325097068299140E+24, -0.418600611419248E+26, 0.297478906557467E+35, -0.953588761745473E+20, 0.166957699620939E+25, -0.175407764869978E+33, 0.347581490626396E+35, -0.710971318427851E+39};

    //kJ/(kg*K)
    const double s1Star = 5.21;
    //kJ/(kg*K)
    const double s2Star = 9.2;
    //kJ/kg
    const double hStar = 2800;
    const int N = 30;

    double sigma1 = entr / s1Star;
    double sigma2 = entr / s2Star;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_h2ab_s_2prime[i] *
            pow(pow(sigma1, -1) - 0.513, _I_h2ab_s_2prime[i]) *
            pow(sigma2 - 0.524, _J_h2ab_s_2prime[i]);
        sum = sum + calc;
    }

    return hStar * exp(sum);
}

//Equation for h2ab_s_2prime(s)
double _h2c3b_s_2prime(double entr)
{
	const int _I_h2c3b_s_2prime[16] = {0, 0, 0, 1, 1, 5, 6, 7, 8, 8, 12, 16, 22, 22, 24, 36};
	const int _J_h2c3b_s_2prime[16] = {0, 3, 4, 0, 12, 36, 12, 16, 2, 20, 32, 36, 2, 32, 7, 20};
	const double _n_h2c3b_s_2prime[16] = {0.104351280732769E+01, -0.227807912708513E+01, 0.180535256723202E+01, 0.420440834792042, -0.105721244834660E+06, 0.436911607493884E+25, -0.328032702839753E+12, -0.678686760804270E+16, 0.743957464645363E+04, -0.356896445355761E+20, 0.167590585186801E+32, -0.355028625419105E+38, 0.396611982166538E+12, -0.414716268484468E+41, 0.359080103867382E+19, -0.116994334851995E+41};

    //kJ/(kg*K)
    const double sStar = 5.9;
    //kJ/kg
    const double hStar = 2800;
    const int N = 16;

    double sigma = entr / sStar;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_h2c3b_s_2prime[i] *
            pow(sigma - 1.02, _I_h2c3b_s_2prime[i]) *
            pow(sigma - 0.726, _J_h2c3b_s_2prime[i]);
        sum = sum + calc;
    }

    return hStar * pow(sum, 4);
}

//Equation for hB13(s)
double _hB13_s(double entr)
{
	const int _I_hB13_s[6] = {0, 1, 1, 3, 5, 6};
	const int _J_hB13_s[6] = {0, -2, 2, -12, -4, -3};
	const double  _n_hB13_s[6] = {0.913965547600543, -0.430944856041991E-04, 0.603235694765419E+02, 0.117518273082168E-17, 0.220000904781292, -0.690815545851641E+02};

    //kJ/kg
    const double hStar = 1700;
    //kJ/(kg*K)
    const double sStar = 3.8;
    const int N = 6;

    double sigma = entr / sStar;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_hB13_s[i] *
            pow(sigma - 0.884, _I_hB13_s[i]) *
            pow(sigma - 0.864, _J_hB13_s[i]);
        sum = sum + calc;
    }

    return hStar * sum;
}

//Equation for TB23(s)
double _TB23_s(double enth, double entr)
{
	const int _I_TB23_s[25] = {-12, -10, -8, -4, -3, -2, -2, -2, -2, 0, 1, 1, 1, 3, 3, 5, 6, 6, 8, 8, 8, 12, 12, 14, 14};
	const int _J_TB23_s[25] = {10, 8, 3, 4, 3, -6, 2, 3, 4, 0, -3, -2, 10, -2, -1, -5, -6, -3, -8, -2, -1, -12, -1, -12, 1};
	const double _n_TB23_s[25] = {0.629096260829810E-03, -0.823453502583165E-03, 0.515446951519474E-07, -0.117565945784945E+01, 0.348519684726192E+01, -0.507837382408313E-11, -0.284637670005479E+01, -0.236092263939673E+01, 0.601492324973779E+01, 0.148039650824546E+01, 0.360075182221907E-03, -0.126700045009952E-01, -0.122184332521413E+07, 0.149276502463272, 0.698733471798484, -0.252207040114321E-01, 0.147151930985213E-01, -0.108618917681849E+01, -0.936875039816322E-03, 0.819877897570217E+02, -0.182041861521835E+03, 0.261907376402688E-05, -0.291626417025961E+05, 0.140660774926165E-04, 0.783237062349385E+07};

    //K
    const double tStar = 900;
    //kJ/kg
    const double hStar = 3000;
    //kJ/(kg*K)
    const double sStar = 5.3;
    const int N = 25;

    double eta = enth / hStar;
    double sigma = entr / sStar;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double calc = _n_TB23_s[i] *
            pow(eta - 0.727, _I_TB23_s[i]) *
            pow(sigma - 0.864, _J_TB23_s[i]);
        sum = sum + calc;
    }

    return tStar * sum;
}
