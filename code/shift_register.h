                    /* 74LS164.h */
void Init_74LS164(void);
//void SIPO_74LS164(unsigned char );//Serial In Parallel Out(SIPO) Operations
void SIPO_74LS164(unsigned int SIN,unsigned int CP,unsigned char sDat);

#define SIN1  16     //p0.8
#define CP1   17  //p0.9

#define SIN2  18     //p0.10
#define CP2   19     //p0.11

#define SIN3  20    //p0.12
#define CP3   21     //p0.13

#define SIN4  22    //p0.14
#define CP4   23     //p0.15