#include <iostream>
#include <cstring>
using namespace std;
int number = 100;

class BankAccount {
	public:
		 void deposit(int x){
			balance += x;
		}
		void withdraw(int y){
			balance-= y;
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
	Checking():BankAccount(){
		overdraft_fee = 25;
	}
};
int main(){
	
	char d,w,p,e,x,y;
	char choice;
	string name;
	string phone;
	
	cout<< endl;
	cout<< "                 Welcome to the bank" << endl;
	cout<< endl;
	cout<< "                 Lets create an account" << endl;
	cout<< "Please enter a name for the account " << endl;
	cin>> name;
	cout<< "Please enter a phone number " << endl;
	cin>> phone;
	
	
	
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
		
		Checking new_a;
		
		switch(choice)
		{
			case 'd':
			cout<<" Please enter amout for deposit ";
			cin>> x;
			new_a.deposit(100);
			break;
			case 'w':
			cout<<" Please enter amout to withdraw ";
			cin>> y;
			new_a.withdraw(100);
			break;
			case 'p':
			void.print();
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