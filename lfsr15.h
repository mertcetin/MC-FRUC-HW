#pragma once
class LFSR
{
public:
	LFSR() : lfsr_out(0),temp_out(0){}
	long unsigned int LFSR15Bit()
	{
		bool bit15, bit14, linear_feedback;


		temp_out = lfsr_out;
		bit15 = lfsr_out >> 14;
		bit14 = (lfsr_out & 0x2000 ) >> 13;

		linear_feedback = !(bit15 ^ bit14);
		//	cout << linear_feedback<< " ";
		lfsr_out = (lfsr_out<<1) | linear_feedback;
		lfsr_out = (lfsr_out & 0x7FFF);

		return temp_out;

	}
private:

	long unsigned int lfsr_out;
	long unsigned int temp_out;
};




