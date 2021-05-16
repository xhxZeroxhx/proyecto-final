/*
 * constantes.h
 *
 *  Created on: 30 de ene. de 2017
 *      Author: Hernán
 */

#ifndef INC_CONSTANTES_H_
#define INC_CONSTANTES_H_



const uint16_t tabla_cuad[ NUMERO_MUESTRAS ] = {  1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,
		1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,
		1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint16_t tabla_seno[ NUMERO_MUESTRAS ] = {512,539,566,592,618,645,670,695,720,744,768,791,813,834,855,874,892,910,926,941,955,968,980,990,999,
		1007,1013,1018,1021,1023,1024,1023,1021,1018,1013,1007,999,990,980,968,955,941,926,910,892,874,855,834,813,791,768,744,720,695,670,645,618,592,
		566,539,512,485,458,432,406,379,354,329,304,280,256,233,211,190,169,150,132,114,98,83,69,56,44,34,25,17,11,6,3,1,0,1,3,6,11,17,25,34,44,56,69,
		83,98,114,132,150,169,190,211,233,256,280,304,329,354,379,406,432,458,485
};

const uint16_t tabla_tria[ NUMERO_MUESTRAS ] = {0,17,34,51,68,85,102,119,137,154,171,188,205,222,239,256,273,290,307,324,341,358,375,393,410,427,444,
		461,478,495,512,529,546,563,580,597,614,631,649,666,683,700,717,734,751,768,785,802,819,836,853,870,887,905,922,939,956,973,990,1007,1024,1007,
		990,973,956,939,922,905,887,870,853,836,819,802,785,768,751,734,717,700,683,666,649,631,614,597,580,563,546,529,512,495,478,461,444,427,410,393,
		375,358,341,324,307,290,273,256,239,222,205,188,171,154,137,119,102,85,68,51,34,17
};

const uint16_t tabla_sier[ NUMERO_MUESTRAS ] = {0,9,17,26,34,43,51,60,68,77,85,94,102,111,119,128,137,145,154,162,171,179,188,196,205,213,222,230,239,
		247,256,265,273,282,290,299,307,316,324,333,341,350,358,367,375,384,393,401,410,418,427,435,444,452,461,469,478,486,495,503,512,521,529,538,546,
		555,563,572,580,589,597,606,614,623,631,640,649,657,666,674,683,691,700,708,717,725,734,742,751,759,768,777,785,794,802,811,819,828,836,845,853,
		862,870,879,887,896,905,913,922,930,939,947,956,964,973,981,990,998,1007,1015
};


#endif /* INC_CONSTANTES_H_ */