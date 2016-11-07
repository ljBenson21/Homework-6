#ifndef _STUDENT_H_
#define _STUDENT_H_
#include "Customer.h"

class Student : public Customer
{
private:
	int ODfee = 5;
	int CHKfee = 23;
	double CHK_RT = 0.04;
	double SAVE_RT = 0.03;
public:
	string Name() { getName(); };
	string Addy() { getAddy(); };
	int age() { getAge(); };
	string phone() { getPhoneNum(); };

	Student(string n, string a, string phone, int age, int custNum)
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