//#include <iostream>
//using namespace std;
//
//#include "lfsr15.h"
//
//long unsigned int LFSR15Bit()
//{
//	bool bit15, bit14, linear_feedback;
//
//	
//	temp_out = lfsr_out;
//	bit15 = lfsr_out >> 14;
//	bit14 = (lfsr_out & 0x2000 ) >> 13;
//
//	linear_feedback = !(bit15 ^ bit14);
////	cout << linear_feedback<< " ";
//	lfsr_out = (lfsr_out<<1) | linear_feedback;
//	lfsr_out = (lfsr_out & 0x7FFF);
//
//	return temp_out;
//
//}

/*int main()
{

int i= 0;

for (i=0; i<100; i++)
{
	cout << LFSR15Bit()<<endl;
}


return 0;
}*/
