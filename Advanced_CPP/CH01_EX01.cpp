#include <iostream>
using namespace std;
class Account {
protected:
	double balance;
public:
	Account(double bal)
	{
		if (bal > 0)
		{
			balance = bal;
		}
		else
		{
			bal = 0.0;
		}
	}
	void Credit(double amount)
	{
		balance += amount;
	}
	void debit(double amount)
	{
		if (balance > amount)
		{
			balance -= amount;
		}
		else
		{
			cout << "Insufficent funds" << endl;
		}
	}
	double getBalance()
	{
		return balance;
	}
};
class CheckingAccount : public Account 
{
private:
	double fee;
public:
	CheckingAccount(double bal, double f) : Account(bal)
	{
		fee = f;
	}
	void debit(double amount)
	{
		if (balance > amount)
		{
			balance -= (amount + fee);
		}
		else
		{
			cout << "Insufficent funds" << endl;
		}
	}
};
//int main()
//{
//	CheckingAccount myAccount(500, 0.5);
//	myAccount.Credit(100);
//	cout << "Balance: $" << myAccount.getBalance() << endl;
//	myAccount.debit(50);
//	cout << "Balance: $" << myAccount.getBalance() << endl;
//	return 0;
//}