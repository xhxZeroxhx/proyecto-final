/*
 * constantes.h
 *
 *  Created on: 30 de ene. de 2017
 *      Author: Hernán
 */

#ifndef INC_CONSTANTES_H_
#define INC_CONSTANTES_H_



const float32_t Coef_1khz_LP[NUM_TAPS] = {
    0.0030f,    0.0038f,    0.0058f,    0.0089f,    0.0135f,    0.0192f,    0.0261f,    0.0337f,    0.0416f,    0.0495f,    0.0568f,    0.0631f,
    0.0679f,    0.0710f,    0.0720f,    0.0710f,    0.0679f,    0.0631f,    0.0568f,    0.0495f,    0.0416f,    0.0337f,    0.0261f,    0.0192f,
    0.0135f,    0.0089f,    0.0058f,    0.0038f,    0.0030f
};

const float32_t Coef_3khz_LP[NUM_TAPS] = {
-0.0013f,   -0.0021f,   -0.0033f,   -0.0048f,   -0.0057f,   -0.0046f,    0.0000f,    0.0094f,    0.0241f,    0.0435f,    0.0659f,    0.0883f,
 0.1075f,    0.1205f,    0.1251f,    0.1205f,    0.1075f,    0.0883f,    0.0659f,    0.0435f,    0.0241f,    0.0094f,    0.0000f,   -0.0046f,
-0.0057f,   -0.0048f,   -0.0033f,   -0.0021f,   -0.0013f
};

const float32_t Coef_6khz_LP[NUM_TAPS] = {
  -0.0018225230f, -0.0015879294f, +0.0000000000f, +0.0036977508f, +0.0080754303f, +0.0085302217f, -0.0000000000f, -0.0173976984f,
  -0.0341458607f, -0.0333591565f, +0.0000000000f, +0.0676308395f, +0.1522061835f, +0.2229246956f, +0.2504960933f, +0.2229246956f,
  +0.1522061835f, +0.0676308395f, +0.0000000000f, -0.0333591565f, -0.0341458607f, -0.0173976984f, -0.0000000000f, +0.0085302217f,
  +0.0080754303f, +0.0036977508f, +0.0000000000f, -0.0015879294f, -0.0018225230f
};

const float32_t Coef_9khz_LP[NUM_TAPS] = {
-0.0013f,    0.0009f,    0.0033f,    0.0020f,   -0.0057f,   -0.0111f,    0.0000f,    0.0227f,    0.0241f,   -0.0180f,   -0.0658f,   -0.0365f,
 0.1074f,    0.2906f,    0.3749f,    0.2906f,    0.1074f,   -0.0365f,   -0.0658f,   -0.0180f,    0.0241f,    0.0227f,    0.0000f,   -0.0111f,
-0.0057f,    0.0020f,    0.0033f,    0.0009f,   -0.0013f
};

const float32_t Coef_12khz_LP[NUM_TAPS] = {
	0.0000f,    0.0022f,   -0.0000f,   -0.0052f,    0.0000f,    0.0120f,   -0.0000f,   -0.0245f,    0.0000f,    0.0470f,   -0.0000f,   -0.0953f,
	0.0000f,    0.3142f,    0.4992f,    0.3142f,    0.0000f,   -0.0953f,   -0.0000f,    0.0470f,    0.0000f,   -0.0245f,   -0.0000f,    0.0120f,
	0.0000f,   -0.0052f,   -0.0000f,    0.0022f,    0.0000f
};

const float32_t Coef_15khz_LP[NUM_TAPS] = {

  0.0013f,    0.0009f,   -0.0033f,    0.0020f,    0.0057f,   -0.0111f,    0.0000f,    0.0226f,   -0.0240f,   -0.0180f,    0.0657f,   -0.0365f,
 -0.1072f,    0.2901f,    0.6238f,    0.2901f,   -0.1072f,   -0.0365f,    0.0657f,   -0.0180f,   -0.0240f,    0.0226f,    0.0000f,   -0.0111f,
  0.0057f,    0.0020f,   -0.0033f,    0.0009f,    0.0013f
};

const float32_t Coef_18khz_LP[NUM_TAPS] = {
	0.0018f,   -0.0016f,    0.0000f,    0.0037f,   -0.0080f,    0.0085f,   -0.0000f,   -0.0173f,    0.0340f,   -0.0332f,    0.0000f,    0.0674f,
	-0.1516f,    0.2221f,    0.7487f,    0.2221f,   -0.1516f,    0.0674f,    0.0000f,   -0.0332f,    0.0340f,   -0.0173f,   -0.0000f,    0.0085f,
	-0.0080f,    0.0037f,    0.0000f,   -0.0016f,    0.0018f
};

const float32_t Coef_22khz_LP[NUM_TAPS] = {

	  0.0009f,   -0.0006f,    0.0000f,    0.0013f,   -0.0040f,    0.0085f,   -0.0151f,    0.0237f,   -0.0340f,    0.0454f,   -0.0569f,    0.0674f,
	 -0.0759f,    0.0813f,    0.9157f,    0.0813f,   -0.0759f,    0.0674f,   -0.0569f,    0.0454f,   -0.0340f,    0.0237f,   -0.0151f,    0.0085f,
	 -0.0040f,    0.0013f,    0.0000f,   -0.0006f,    0.0009f
};
const float32_t Coef_1k2hz_HP[NUM_TAPS] = {
		   -0.0018f,   -0.0021f,   -0.0030f,   -0.0045f,   -0.0065f,   -0.0090f,   -0.0119f,   -0.0151f,   -0.0183f,   -0.0214f,   -0.0243f,   -0.0267f,
		   -0.0285f,   -0.0297f,    0.9717f,   -0.0297f,   -0.0285f,   -0.0267f,   -0.0243f,   -0.0214f,   -0.0183f,  -0.0151f,   -0.0119f,   -0.0090f,
		   -0.0065f,   -0.0045f,   -0.0030f,   -0.0021f,   -0.0018f
};

const float32_t Coef_1k6hz_HP[NUM_TAPS] = {
	   -0.0018f,   -0.0022f,   -0.0033f,   -0.0052f,   -0.0078f,   -0.0111f,   -0.0151f,   -0.0195f,   -0.0241f,   -0.0287f,   -0.0330f,   -0.0366f,
	   -0.0394f,   -0.0411f,    0.9599f,   -0.0411f,   -0.0394f,   -0.0366f,   -0.0330f,   -0.0287f,   -0.0241f,   -0.0195f,   -0.0151f,   -0.0111f,
	   -0.0078f,   -0.0052f,   -0.0033f,   -0.0022f   -0.0018f
};

const float32_t Coef_2khz_HP[NUM_TAPS] = {
	    0.0009f,    0.0006f,   -0.0000f,   -0.0013f,   -0.0040f,   -0.0085f,   -0.0151f,   -0.0237f,   -0.0340f,   -0.0454f,   -0.0569f,   -0.0674f,
	   -0.0759f,   -0.0813f,    0.9157f,   -0.0813f,   -0.0759f,   -0.0674f,   -0.0569f,   -0.0454f,   -0.0340f,   -0.0237f,   -0.0151f,   -0.0085f,
	   -0.0040f,   -0.0013f,   -0.0000f,    0.0006f,    0.0009f
};

const float32_t Coef_3khz_HP[NUM_TAPS] = {
	  0.0013f,    0.0021f,    0.0033f,    0.0048f,    0.0057f,    0.0046f,   -0.0000f,   -0.0094f,   -0.0241f,   -0.0435f,   -0.0657f,   -0.0881f,
	 -0.1073f,   -0.1203f,    0.8741f,   -0.1203f,   -0.1073f,   -0.0881f,   -0.0657f,   -0.0435f,   -0.0241f,   -0.0094f,   -0.0000f,    0.0046f,
	  0.0057f,    0.0048f,    0.0033f,    0.0021f,    0.0013f
};

const float32_t Coef_4khz_HP[NUM_TAPS] = {
		   -0.0016f,   -0.0011f,   -0.0000f,    0.0026f,    0.0070f,    0.0121f,    0.0151f,    0.0123f,   -0.0000f,   -0.0236f,   -0.0571f,   -0.0956f,
		   -0.1318f,   -0.1576f,    0.8348f,   -0.1576f,   -0.1318f,   -0.0956f,   -0.0571f,   -0.0236f,   -0.0000f,    0.0123f,    0.0151f,    0.0121f,
		    0.0070f,    0.0026f,   -0.0000f,   -0.0011f,   -0.0016f
};

const float32_t Coef_6khz_HP[NUM_TAPS] = {
		0.0018f,    0.0016f,   -0.0000f,   -0.0037f,   -0.0080f,   -0.0085f,   -0.0000f,    0.0173f,    0.0340f,    0.0332f,   -0.0000f,   -0.0674f,
	   -0.1516f,   -0.2221f,    0.7487f,   -0.2221f,   -0.1516f,   -0.0674f,   -0.0000f,    0.0332f,    0.0340f,    0.0173f,   -0.0000f,   -0.0085f,
	   -0.0080f,   -0.0037f,   -0.0000f,    0.0016f,    0.0018f
};

const float32_t Coef_9khz_HP[NUM_TAPS] = {
	    0.0013f,   -0.0009f,   -0.0033f,   -0.0020f,    0.0057f,    0.0111f,   -0.0000f,   -0.0226f,   -0.0240f,    0.0180f,    0.0657f,    0.0365f,
	   -0.1072f,   -0.2901f,    0.6238f,   -0.2901f,   -0.1072f,    0.0365f,    0.0657f,    0.0180f,   -0.0240f,   -0.0226f,   -0.0000f,    0.0111f,
	    0.0057f,   -0.0020f,   -0.0033f,   -0.0009f,    0.0013f
};

const float32_t Coef_12khz_HP[NUM_TAPS] = {
		   -0.0000f,   -0.0022f,   -0.0000f,    0.0052f,   -0.0000f,   -0.0120f,   -0.0000f,    0.0245f,   -0.0000f,   -0.0470f,   -0.0000f,    0.0953f,
		   -0.0000f,   -0.3142f,    0.4992f,   -0.3142f,   -0.0000f,    0.0953f,   -0.0000f,   -0.0470f,   -0.0000f,    0.0245f,   -0.0000f,   -0.0120f,
		   -0.0000f,    0.0052f,   -0.0000f,   -0.0022f,   -0.0000f
};

const float32_t Coef_1a4khz_BP[NUM_TAPS] = {
		   -0.0002f,   -0.0014f,   -0.0043f,   -0.0100f,   -0.0190f,   -0.0298f,   -0.0388f,   -0.0409f,   -0.0310f,   -0.0066f,    0.0310f,    0.0758f,
		    0.1187f,    0.1496f,    0.1609f,    0.1496f,    0.1187f,    0.0758f,    0.0310f,   -0.0066f,   -0.0310f,   -0.0409f,   -0.0388f,   -0.0298f,
		   -0.0190f,   -0.0100f,   -0.0043f,   -0.0014f,   -0.0002f
};

const float32_t Coef_1a5khz_BP[NUM_TAPS] = {
		   -0.0031f,   -0.0023f,   -0.0011f,    0.0000f,   -0.0013f,   -0.0090f,   -0.0248f,   -0.0449f,   -0.0588f,   -0.0528f,   -0.0174f,    0.0447f,
		    0.1175f,    0.1761f,    0.1986f,    0.1761f,    0.1175f,    0.0447f,   -0.0174f,   -0.0528f,   -0.0588f,   -0.0449f,   -0.0248f,   -0.0090f,
		   -0.0013f,    0.0000f,   -0.0011f,   -0.0023f,   -0.0031f
};

const float32_t Coef_1a6khz_BP[NUM_TAPS] = {
		   -0.0007f,   -0.0029f,   -0.0065f,   -0.0094f,   -0.0078f,   -0.0014f,    0.0015f,   -0.0119f,   -0.0441f,   -0.0757f,   -0.0715f,   -0.0070f,
		    0.1050f,    0.2132f,    0.2580f,    0.2132f,    0.1050f,   -0.0070f,   -0.0715f,   -0.0757f,   -0.0441f,   -0.0119f,    0.0015f,
			-0.0014f, -0.0078f,   -0.0094f,   -0.0065f,   -0.0029f,   -0.0007f
};

const float32_t Coef_2a4khz_BP[NUM_TAPS] = {
	    0.0043f,    0.0029f,   -0.0000f,   -0.0069f,   -0.0191f,   -0.0356f,   -0.0523f,   -0.0624f,   -0.0591f,   -0.0380f,         0,    0.0485f,
	    0.0964f,    0.1316f,    0.1445f,    0.1316f,    0.0964f,    0.0485f,         0,   -0.0380f,   -0.0591f,   -0.0624f,   -0.0523f,   -0.0356f,
	   -0.0191f,   -0.0069f,   -0.0000f,    0.0029f,    0.0043f
};

const float32_t Coef_2a5khz_BP[NUM_TAPS] = {
	    0.0043f,    0.0029f,   -0.0000f,   -0.0069f,   -0.0191f,   -0.0356f,   -0.0523f,   -0.0624f,   -0.0591f,   -0.0380f,         0,    0.0485f,
	    0.0964f,    0.1316f,    0.1445f,    0.1316f,    0.0964f,    0.0485f,         0,   -0.0380f,   -0.0591f,   -0.0624f,   -0.0523f,   -0.0356f,
	   -0.0191f,   -0.0069f,   -0.0000f,    0.0029f,    0.0043f
};

const float32_t Coef_2a6khz_BP[NUM_TAPS] = {
	    0.0020f,   -0.0001f,   -0.0032f,   -0.0057f,   -0.0041f,    0.0012f,    0.0015f,   -0.0164f,   -0.0550f,   -0.0941f,   -0.0972f,   -0.0386f,
	    0.0696f,    0.1759f,    0.2202f,    0.1759f,    0.0696f,   -0.0386f,   -0.0972f,   -0.0941f,   -0.0550f,   -0.0164f,    0.0015f,    0.0012f,
	   -0.0041f,   -0.0057f,   -0.0032f,   -0.0001f,    0.0020f
};

const float32_t Coef_3a4khz_BP[NUM_TAPS] = {
	    0.0080f,    0.0116f,    0.0154f,    0.0161f,    0.0085f,   -0.0103f,   -0.0381f,   -0.0664f,   -0.0828f,   -0.0767f,   -0.0440f,    0.0092f,
	    0.0681f,    0.1139f,    0.1311f,    0.1139f,    0.0681f,    0.0092f,   -0.0440f,   -0.0767f,   -0.0828f,   -0.0664f,   -0.0381f,   -0.0103f,
	    0.0085f,    0.0161f,    0.0154f,    0.0116f,    0.0080f
};

const float32_t Coef_3a5khz_BP[NUM_TAPS] = {
	-0.0031f,    0.0008f,    0.0076f,    0.0177f,    0.0262f,    0.0240f,    0.0033f,   -0.0346f,   -0.0758f,   -0.0982f,   -0.0830f,   -0.0275f,
	 0.0499f,    0.1171f,    0.1437f,    0.1171f,    0.0499f,   -0.0275f,   -0.0830f,   -0.0982f,   -0.0758f,   -0.0346f,    0.0033f,    0.0240f,
	 0.0262f,    0.0177f,    0.0076f,    0.0008f,   -0.0031f
};

const float32_t Coef_3a6khz_BP[NUM_TAPS] = {
	    0.0006f,   -0.0004f,   -0.0014f,    0.0005f,    0.0093f,    0.0237f,    0.0310f,    0.0132f,   -0.0353f,   -0.0929f,   -0.1170f,   -0.0749f,
	    0.0249f,    0.1291f,    0.1733f,    0.1291f,    0.0249f,   -0.0749f,   -0.1170f,   -0.0929f,   -0.0353f,    0.0132f,    0.0310f,    0.0237f,
	    0.0093f,    0.0005f,   -0.0014f,   -0.0004f,    0.0006f
};


const uint16_t tabla_cuad[ NUMERO_MUESTRAS ] = {  65472, 65472, 65472, 65472, 65472, 65472, 65472, 65472, 65472, 65472, 65472, 65472,
		65472, 65472, 65472, 65472, 65472, 65472,65472, 65472, 65472, 65472, 65472, 65472,65472, 65472, 65472, 65472, 65472, 65472,
		 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,};

const uint16_t tabla_seno[ NUMERO_MUESTRAS ] = {32768, 36160, 39552, 42880, 46080, 49152, 51968, 54656, 57088, 59264, 61120, 62656,
		63872, 64768, 65344, 65472, 65344, 64768, 63872, 62656, 61120, 59264, 57088, 54656, 51968, 49152, 46080, 42880, 39552, 36160,
		32768, 29376, 25984, 22656, 19456, 16384, 13568, 10880, 8448, 6272, 4416, 2880, 1664, 768, 192, 0, 192, 768, 1664, 2880, 4416,
		6272, 8448, 10880, 13568, 16384, 19456, 22656, 25984, 29376};

const uint16_t tabla_tria[ NUMERO_MUESTRAS ] = {32768, 34816, 36864, 38912, 40960, 43008, 45056, 47104, 49152, 51200, 53248, 55296,
		57344, 59392, 61440, 63488, 61440, 59392, 57344, 55296, 53248, 51200, 49152, 47104, 45056, 43008, 40960, 38912, 36864, 34816,
		32768, 30720, 28672, 26624, 24576, 22528, 20480, 18432, 16384, 14336, 12288, 10240, 8192, 6144, 4096, 2048, 4096, 6144, 8192,
		10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720};

const uint16_t tabla_sier[ NUMERO_MUESTRAS ] = {0, 1088, 2176, 3264, 4352, 5440, 6528, 7616, 8704, 9792, 10880, 11968, 13056, 14144,
		15232, 16320, 17408, 18496, 19584, 20672, 21760, 22848, 23936, 25024, 26112, 27200, 28288, 29376, 30464, 31552, 32640, 33728,
		34816, 35904, 36992, 38080, 39168, 40256, 41344, 42432, 43520, 44608, 45696, 46784, 47872, 48960, 50048, 51136, 52224, 53312,
		54400, 55488, 56576, 57664, 58752, 59840, 60928, 62016, 63104, 64192};

const float32_t tabla_cuad_f32[ NUMERO_MUESTRAS ] = {  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,};

const float32_t tabla_seno_f32[ NUMERO_MUESTRAS ] = {0, 0.104500003, 0.207900003, 0.308999985, 0.406699985, 0.5, 0.587700009, 0.669099987,
		0.743099988, 0.809000015, 0.865999997, 0.913500011, 0.950999975, 0.978100002, 0.994499981, 1, 0.994499981, 0.978100002, 0.950999975,
		0.913500011, 0.865999997, 0.809000015, 0.743099988, 0.669099987, 0.587700009, 0.5, 0.406699985, 0.308999985, 0.207900003, 0.104500003,
		0, -0.104500003, -0.207900003, -0.308999985, -0.406699985, -0.5, -0.587700009, -0.669099987, -0.743099988, -0.809000015, -0.865999997,
		-0.913500011, -0.950999975, -0.978100002, -0.994499981, -1, -0.994499981, -0.978100002, -0.950999975, -0.913500011, -0.865999997,
		-0.809000015, -0.743099988, -0.669099987, -0.587700009, -0.5, -0.406699985, -0.308999985, -0.207900003, -0.104500003};

const float32_t tabla_tria_f32[ NUMERO_MUESTRAS ] = {0, 0.0666999966, 0.133300006, 0.200000003, 0.2667, 0.333299994, 0.400000006, 0.466699988,
		0.533299983, 0.600000024, 0.666700006, 0.733299971, 0.800000012, 0.866699994, 0.933300018, 1, 0.933300018, 0.866699994, 0.800000012,
		0.733299971, 0.666700006, 0.600000024, 0.533299983, 0.466699988, 0.400000006, 0.333299994, 0.2667, 0.200000003, 0.133300006, 0.0666999966,
		0, -0.0666999966, -0.133300006, -0.200000003, -0.2667, -0.333299994, -0.400000006, -0.466699988, -0.533299983, -0.600000024, -0.666700006,
		-0.733299971, -0.800000012, -0.866699994, -0.933300018, -1, -0.933300018, -0.866699994, -0.800000012, -0.733299971, -0.666700006,
		-0.600000024, -0.533299983, -0.466699988, -0.400000006, -0.333299994, -0.2667, -0.200000003, -0.133300006, -0.0666999966};

const float32_t tabla_sier_f32[ NUMERO_MUESTRAS ] = {0, 0.0166666675, 0.0333333351, 0.0500000007, 0.0666666701, 0.0833333358, 0.100000001, 0.116666667,
		0.13333334, 0.150000006, 0.166666672, 0.183333337, 0.200000003, 0.216666669, 0.233333334, 0.25, 0.266666681, 0.283333331, 0.300000012,
		0.316666663, 0.333333343, 0.349999994, 0.366666675, 0.383333325, 0.400000006, 0.416666657, 0.433333337, 0.449999988, 0.466666669, 0.483333319,
		0.5, 0.516666651, 0.533333361, 0.550000012, 0.566666663, 0.583333313, 0.600000024, 0.616666675, 0.633333325, 0.649999976, 0.666666687,
		0.683333337, 0.699999988, 0.716666639, 0.733333349, 0.75, 0.766666651, 0.783333361, 0.800000012, 0.816666663, 0.833333313, 0.850000024,
		0.866666675, 0.883333325, 0.899999976, 0.916666687, 0.933333337, 0.949999988, 0.966666639, 0.983333349};

const float32_t FREC_NOTA[]={130.812783, 138.591315, 146.832384, 155.563492, 164.813778, 174.614116, 184.997211, 195.997718,
		207.652349, 220.000000, 233.081881, 246.941651, 261.625565, 277.182631,	293.664768, 311.126984,	329.627557,
		349.228231, 369.994423, 391.995436, 415.304698,	440.000000, 466.163762, 493.883301, 523.251131, 554.365262,
		587.329536, 622.253967,	659.255114, 698.456463, 739.988845, 783.990872};

#endif /* INC_CONSTANTES_H_ */