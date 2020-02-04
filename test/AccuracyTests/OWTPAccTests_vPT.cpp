#ifndef ACC_TEST_BASE_H
    #define ACC_TEST_BASE_H
    #include "AccTestBase.h"
#endif

class OWTPAccTests_vPT : public AccTestBase { };

extern "C"
{
    DLL_IMPORT double v_P_T(double,double);
}

//Region 1

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 5 on page 9.

TEST_F(OWTPAccTests_vPT, v_P_T_300K_3MPa)
{
	const double testTemp = 300;
	const double testPressure = 3;
    const double vExp = 0.100215168E-02;

	double v = v_P_T(testPressure, testTemp);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_300K_80MPa)
{
	const double testTemp = 300;
	const double testPressure = 80;
    const double vExp = 0.971180894E-03;

	double v = v_P_T(testPressure, testTemp);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_500K_3MPa)
{
	const double testTemp = 500;
	const double testPressure = 3;
    const double vExp = 0.120241800E-02;

	double v = v_P_T(testPressure, testTemp);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}

//Region 2

//The temperature and pressure data points for Region1 were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 15 on page 17.

TEST_F(OWTPAccTests_vPT, v_P_T_300K_0d0035MPa)
{
	const double testTemp = 300;
	const double testPressure = 0.0035;
    const double vExp = 0.394913866E+02;

	double v = v_P_T(testPressure, testTemp);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_700K_0d0035MPa)
{
	const double testTemp = 700;
	const double testPressure = 0.0035;
    const double vExp = 0.923015898E+02;

	double v = v_P_T(testPressure, testTemp);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_700K_30MPa)
{
	const double testTemp = 700;
	const double testPressure = 30;
    const double vExp = 0.542946619E-02;

	double v = v_P_T(testPressure, testTemp);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}

//Region 3

//The testing data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 33 on page 32.

TEST_F(OWTPAccTests_vPT, v_P_T_0d255837018Ep02MPa_650K)
{
    const double press = 0.255837018E+02;
    const double temp = 650;
    const double vExp = 1.0/500.0;

    double v = v_P_T(press,temp);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_0d222930643Ep02MPa_650K)
{
    const double press = 0.222930643E+02;
    const double temp = 650;
    const double vExp = 1.0/200.0;

    double v = v_P_T(press,temp);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_0d783095639Ep02MPa_750K)
{
    const double press = 0.783095639E+02;
    const double temp = 750;
    const double vExp = 1.0/500.0;

    double v = v_P_T(press,temp);
    double vErr = AbsRelativeErr(v, vExp);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}

//The testing data points for the following tests were suggested
//by the IAPWS in "Revised Supplementary Release on
//Backward //Equations for Specific Volume as a Function of Pressure and
//Temperature v(p,T) for Region 3 of the IAPWS Industrial Formulation 1997 for
//the Thermodynamic Properties of Water and Steam" in Tables 5 & 13 on
//pages 13 & 20.

TEST_F(OWTPAccTests_vPT, v_P_T_50MPa_630K)
{
    const double pressure = 50;
    const double temp = 630;
    const double vActual = 1.470853100E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_80MPa_670K)
{
    const double pressure = 80;
    const double temp = 670;
    const double vActual = 1.503831359E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_50MPa_710K)
{
    const double pressure = 50;
    const double temp = 710;
    const double vActual = 2.204728587E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_80MPa_750K)
{
    const double pressure = 80;
    const double temp = 750;
    const double vActual = 1.973692940E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_20MPa_630K)
{
    const double pressure = 20;
    const double temp = 630;
    const double vActual = 1.761696406E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_30MPa_650K)
{
    const double pressure = 30;
    const double temp = 650;
    const double vActual = 1.819560617E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_26MPa_656K)
{
    const double pressure = 26;
    const double temp = 656;
    const double vActual = 2.245587720E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_30MPa_670K)
{
    const double pressure = 30;
    const double temp = 670;
    const double vActual = 2.506897702E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_26MPa_661K)
{
    const double pressure = 26;
    const double temp = 661;
    const double vActual = 2.970225962E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_30MPa_675K)
{
    const double pressure = 30;
    const double temp = 675;
    const double vActual = 3.004627086E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_26MPa_671K)
{
    const double pressure = 26;
    const double temp = 671;
    const double vActual = 5.019029401E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_30MPa_690K)
{
    const double pressure = 30;
    const double temp = 690;
    const double vActual = 4.656470142E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_23d6MPa_649K)
{
    const double pressure = 23.6;
    const double temp = 649;
    const double vActual = 2.163198378E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_24MPa_650K)
{
    const double pressure = 24;
    const double temp = 650;
    const double vActual = 2.166044161E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_23d6MPa_652K)
{
    const double pressure = 23.6;
    const double temp = 652;
    const double vActual = 2.651081407E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_24MPa_654K)
{
    const double pressure = 24;
    const double temp = 654;
    const double vActual = 2.967802335E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_23d6MPa_653K)
{
    const double pressure = 23.6;
    const double temp = 653;
    const double vActual = 3.273916816E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_24MPa_655K)
{
    const double pressure = 24;
    const double temp = 655;
    const double vActual = 3.550329864E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_23d5MPa_655K)
{
    const double pressure = 23.5;
    const double temp = 655;
    const double vActual = 4.545001142E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_24MPa_660K)
{
    const double pressure = 24;
    const double temp = 660;
    const double vActual = 5.100267704E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_23MPa_660K)
{
    const double pressure = 23;
    const double temp = 660;
    const double vActual = 6.109525997E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);

    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_24MPa_670K)
{
    const double pressure = 24;
    const double temp = 670;
    const double vActual = 6.427325645E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d6MPa_646K)
{
    const double pressure = 22.6;
    const double temp = 646;
    const double vActual = 2.117860851E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_23MPa_646K)
{
    const double pressure = 23;
    const double temp = 646;
    const double vActual = 2.062374674E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d6MPa_648d6K)
{
    const double pressure = 22.6;
    const double temp = 648.6;
    const double vActual = 2.533063780E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d8MPa_649d3K)
{
    const double pressure = 22.8;
    const double temp = 649.3;
    const double vActual = 2.572971781E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d6MPa_649d0K)
{
    const double pressure = 22.6;
    const double temp = 649.0;
    const double vActual = 2.923432711E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d8MPa_649d7K)
{
    const double pressure = 22.8;
    const double temp = 649.7;
    const double vActual = 2.913311494E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d6MPa_649d1K)
{
    const double pressure = 22.6;
    const double temp = 649.1;
    const double vActual = 3.131208996E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d8MPa_649d9K)
{
    const double pressure = 22.8;
    const double temp = 649.9;
    const double vActual = 3.221160278E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d6MPa_649d4K)
{
    const double pressure = 22.6;
    const double temp = 649.4;
    const double vActual = 3.715596186E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d8MPa_650d2K)
{
    const double pressure = 22.8;
    const double temp = 650.2;
    const double vActual = 3.664754790E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_21d1MPa_640K)
{
    const double pressure = 21.1;
    const double temp = 640;
    const double vActual = 1.970999272E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_21d8MPa_643K)
{
    const double pressure = 21.8;
    const double temp = 643;
    const double vActual = 2.043919161E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_21d1MPa_644K)
{
    const double pressure = 21.1;
    const double temp = 644;
    const double vActual = 5.251009921E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_21d8MPa_648K)
{
    const double pressure = 21.8;
    const double temp = 648;
    const double vActual = 5.256844741E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_19d1MPa_635K)
{
    const double pressure = 19.1;
    const double temp = 635;
    const double vActual = 1.932829079E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_20MPa_638K)
{
    const double pressure = 20;
    const double temp = 638;
    const double vActual = 1.985387227E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_17MPa_626K)
{
    const double pressure = 17;
    const double temp = 626;
    const double vActual = 8.483262001E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_20MPa_640K)
{
    const double pressure = 20;
    const double temp = 640;
    const double vActual = 6.227528101E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_21d5MPa_644d6K)
{
    const double pressure = 21.5;
    const double temp = 644.6;
    const double vActual = 2.268366647E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d0MPa_646d1K)
{
    const double pressure = 22.0;
    const double temp = 646.1;
    const double vActual = 2.296350553E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d5MPa_648d6K)
{
    const double pressure = 22.5;
    const double temp = 648.6;
    const double vActual = 2.832373260E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d3MPa_647d9K)
{
    const double pressure = 22.3;
    const double temp = 647.9;
    const double vActual = 2.811424405E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d15MPa_647d5K)
{
    const double pressure = 22.15;
    const double temp = 647.5;
    const double vActual = 3.694032281E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d3MPa_648d1K)
{
    const double pressure = 22.3;
    const double temp = 648.1;
    const double vActual = 3.622226305E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d11MPa_648d0K)
{
    const double pressure = 22.11;
    const double temp = 648.0;
    const double vActual = 4.528072649E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d3MPa_649d0K)
{
    const double pressure = 22.3;
    const double temp = 649.0;
    const double vActual = 4.556905799E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d0MPa_646d84K)
{
    const double pressure = 22.0;
    const double temp = 646.84;
    const double vActual = 2.698354719E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d064MPa_647d05K)
{
    const double pressure = 22.064;
    const double temp = 647.05;
    const double vActual = 2.717655648E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d0MPa_646d89K)
{
    const double pressure = 22.0;
    const double temp = 646.89;
    const double vActual = 3.798732962E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_22d064MPa_647d15K)
{
    const double pressure = 22.064;
    const double temp = 647.15;
    const double vActual = 3.701940010E-03;

    double vTest = v_P_T(pressure, temp);
    double vErr = AbsRelativeErr(vTest, vActual);
    bool vPass = IsAcceptable(vErr);
    ASSERT_TRUE(vPass);
}

//Region 5

//The data points for the following tests were
//suggested by the IAPWS in "Revised Release on IAPWS
//Inductrial Formulation 1997 for the Thermodynamic
//Properties of Water and Steam" in Table 42 on page 40.

TEST_F(OWTPAccTests_vPT, v_P_T_0d5MPa_1500K)
{
	const double P = 0.5;
	const double T = 1500;
    const double vExp = 0.138455090E+01;

	double v = v_P_T(P,T);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_30MPa_1500K)
{
	const double P = 30;
	const double T = 1500;
    const double vExp = 0.230761299E-01;

	double v = v_P_T(P,T);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
TEST_F(OWTPAccTests_vPT, v_P_T_30MPa_2000K)
{
	const double P = 30;
	const double T = 2000;
    const double vExp = 0.311385219E-01;

	double v = v_P_T(P,T);
	double vErr = AbsRelativeErr(v, vExp);
	bool vPass = IsAcceptable(vErr);
	ASSERT_TRUE(vPass);
}
