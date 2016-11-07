#ifndef _SENIOR_H_
#define _SENIOR_H_
#include "Customer.h"

class Senior : public Customer
{
private:
	const int ODfee = 8;
	const int CHKfee = 10;
	const double CHK_RT = 0.02;
	const double SAVE_RT = 0.02;
public:
	string Name() { getName(); };
	string Addy() { getAddy(); };
	int age() { getAge(); };
	string phone() { getPhoneNum(); };

	Senior(string n, string a, string phone, int age, int custNum)
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
