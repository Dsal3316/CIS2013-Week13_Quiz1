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
	
	char d,w,p,e;
	char choice;
	
	
	cout<< endl;
	cout<< "                 Welcome to the bank" << endl;
	cout<< endl;
	cout<< "                 Lets create and account" << endl;
	
	
}