#ifndef CHECKING_H_
#define CHECKING_H_
#include <string>
#include "Account.h"
#include "Customer.h"
#include "Transaction.h"

class Chk_Account : public Account
{
public:
	Chk_Account(Customer *cust, int id)
	{
		customer = cust;
		account_number = id;
		balance = 0;
	}
	


	std::string to_string() {
		std::stringstream ss; // for composing the string that describes this account

							  //DONE!! FIXME: Add information about the customer who owns this account.
		ss << customer->getName() << " is the account holder. " << std::endl;
		ss << customer->getCustomerNum() << " is his number... steal his info..." << std::endl;
		ss << "Account type: Checking " << std::endl;
		ss << "  Balance: " << balance << std::endl;
		ss << "  Account ID: " << account_number << std::endl;
		return ss.str();
	}
	void add_interest()
	{
		double interest = customer->getcheckRT();
		double amt = balance*interest;
		balance = balance + amt;
		std::string fees = get_fees();
		std::string type = "Interest";
		Transaction *tran = new Transaction(customer->getCustomerNum(), type, amt, fees);

		// DONE!! FIXME: Create a Transaction object and assign it to the transaction vector. 

		transactions.push_back(tran);
	}

	void deposit(double amt)
	{
		
		balance += amt;
		std::string fees = get_fees();
		std::string type = "deposit";
		Transaction *tran = new Transaction(customer->getCustomerNum(), type, amt, fees);

		// DONE!! FIXME: Create a Transaction object and assign it to transaction vector.

		transactions.push_back(tran);
	}

	void withdraw(double amt)
	{
		balance -= amt;
		std::string fees = get_fees();
		std::string type = "Withdraw";
		Transaction *tran = new Transaction(customer->getCustomerNum(), type, amt, fees);

		// DONE!! FIXME: Create a Transaction object and assign it to tran.

		transactions.push_back(tran);
	}


};

#endif
