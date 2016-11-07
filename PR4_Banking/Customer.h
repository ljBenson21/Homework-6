#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
using namespace std;

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation! I DID IT!!
{
private:
	int age;
	string phone_num;
	string name;
	string address;
	int customer_num;
public:
	Customer() {};
	virtual string getName() { return name; };
	virtual string getAddy() { return address; };
	virtual int getAge() { return age; };
	virtual string getPhoneNum() { return phone_num; };
	virtual int getCustomerNum() { return customer_num; };
	virtual int overdraft_fee() = 0;
	virtual int checking_fee() = 0;
	virtual double getcheckRT() = 0;
	virtual double getSaveRt() = 0;

};




#endif