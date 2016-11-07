#ifndef _ADULT_H_
#define _ADULT_H_
#include "Customer.h"

class Adult : public Customer
{
private:
	const int ODfee = 16;
	const int CHKfee = 25;
	const double CHK_RT = 0.01;
	const double  SAVE_RT = 0.03;
public:
	string Name() { getName(); };
	string Addy() { getAddy(); };
	int age() { getAge(); };
	string phone() { getPhoneNum(); };
	Adult(string n, string a, string phone, int age, int custNum)
	{
		n = getName();
		a = getAddy();
		phone = getPhoneNum();
		age = getAge();
		custNum = getCustomerNum();

	}

	int overdraft_fee()
	{
		return ODfee;
	}
	int  checking_fee()
	{
		return CHKfee;
	}
	double getcheckRT()
	{
		return CHK_RT;
	}
	double getSaveRt()
	{
		return SAVE_RT;
	}

	};


#endif
