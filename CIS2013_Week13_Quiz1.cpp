#include <iostream>
#include <cstring>
using namespace std;
int number = 100;

class BankAccount {
	public:
		 void deposit(int x){
			 cout << "Enter amount you would like to depsit: " << endl;
			 cin>> x;
			balance += x;
			cout << "Your Balance is now " << balance << endl;
		}
		void withdraw(int y){
			cout<< "enter the amout you would like to withdraw: " << endl;
			cin>>y;
			balance-= y;
			cout << "Your balanace is now " << balance << endl;
		}
		BankAccount(){
			string nm = "Anonymous";
			string ph = "555-555-5555";
			BankAccount(nm,ph);
		}
		BankAccount(string n, string p){
			rate=5.0;
			name = n;
			phone = p;
			acct_number= number++;
			balance = 0;
		}
		void print(){
			cout<< "Account: " << acct_number<< endl;
			cout<< "User: " << name<< endl;
			cout << "Phone: " << phone << endl;
			cout << "Rate: " << rate << endl;
			cout << "Balance: " << balance << endl;
		}




	private:
		string name;
		string acct_number;
		string phone;
		int balance;
		float rate;
};

class Savings: public BankAccount{
public:
	
	Savings():BankAccount(){
		minimum_balance =100;
		withdraw_limit = 100;
	}
	Savings(string n, string p):BankAccount(n,p){
		minimum_balance = 100;
		withdraw_limit = 100;
	
	}
	void withdraw(int y){
			if(y<withdraw_limit){
			//balance-= y;
			
			if(balance<minimum_balance){
			cout<< "Warning: you are below your minimum balance." << endl;
			}
		   }else {
			cout << "You are only allowed to withdraw" << withdraw_limit <<
				"from this account. Transaction terminated." << endl;
		}
	}
	
	private:
		int minimum_balance;
		int withdraw_limit;
		int balance;
};
class Checking: public BankAccount{
private:
	int overdraft_fee;
public:
	Checking(string n, string p):BankAccount(n,p){
		overdraft_fee = 25;
	}
};
int main(){
	
	char d,w,p,e;
	char choice;
	char select;
	string name;
	string phone;
	string acct_number;
	
	cout<< endl;
	cout<< "                 Welcome to the bank" << endl;
	cout<< endl;
	cout<< "                 Lets create an account" << endl;
	cout<< "Please enter a name for the account " << endl;
	cin>> name;
	cout<< "Please enter a phone number " << endl;
	cin>> phone;
	cout<< "Please select checking(c) or savings(s):" << endl;
	cin>> select;
	
	Checking newC (name, phone);
	Savings newS (name, phone);
	
	
	//checking menu
	if (select == 'c');
	do {
		
		cout<< endl;
		cout<< "             Please make a selection" << endl;
		cout<< " Make a deposit(d)" << endl;
		cout<< " Make a withdraw(w) " << endl;
		cout<< " Print out Balance(p) " << endl;
		cout<< " Exit out of system(e) " << endl;
		cout<< endl;
		cout<< "Your choice is: " << endl;
		cin>> choice;
		
		
		
		switch(choice)
		{
			case 'd':
			newC.deposit(d);
			break;
			case 'w':
			newC.withdraw(w);
			break;
			case 'p':
			newC.print();
			break;
			case 'e':
			exit(1);
			break;
			
			default :
			cout<< "Value not recognized please choose (d,w,p,e) ";
		}
	}
	
	// savings menu
	while (select == 's');
	do {
		
		cout<< endl;
		cout<< "             Please make a selection" << endl;
		cout<< " Make a deposit(d)" << endl;
		cout<< " Make a withdraw(w) " << endl;
		cout<< " Print out Balance(p) " << endl;
		cout<< " Exit out of system(e) " << endl;
		cout<< endl;
		cout<< "Your choice is: " << endl;
		cin>> choice;
		
		
		
		switch(choice)
		{
			case 'd':
			newS.deposit(d);
			break;
			case 'w':
			newS.withdraw(w);
			break;
			case 'p':
			newS.print();
			break;
			case 'e':
			exit(1);
			break;
			
			default :
			cout<< "Value not recognized please choose (d,w,p,e) ";
		}
	}
		
		while (1);
	
	
	
		return 0;
}