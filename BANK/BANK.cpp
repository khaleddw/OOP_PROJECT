#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountName;
    double balance;


public:

    void setaccountnumber(int accountNumber);
    void setaccountName(string accountName);
    void setbalance(double balance);
    int getAccountNumber();
    string getAccountName();
    double getBalance();
    void deposit(double amount);
    void withdraw(double amount);

};

void BankAccount::setaccountnumber(int num)
{
    accountNumber = num;
}


void BankAccount::setaccountName(string name)
{
    accountName = name;
}

void BankAccount::setbalance(double bal)
{
    balance = bal;
}

int BankAccount::getAccountNumber()
{
    return accountNumber;
}

string BankAccount::getAccountName()
{
    return accountName;
}

double BankAccount::getBalance()
{
    return balance;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
}

void BankAccount::withdraw(double amount)
{
    if (balance >= amount) {
        balance -= amount;
    }
    else {
        cout << "Insufficient balance" << endl;
    }
}

//-------------------------------------


int main()
{
    BankAccount myAccount;
    string accName;
    int accNum;
    double bal;
    double depamountt, withdrawall;
    string inputname;
    int inputpassword;
    int option;

    cout << "\t\t\t*** ATM ***\n \n";
        
    i:
    cout << "\nnew account press 1." << endl;
    cout << "sign in press 2." << endl;
    cout << "exit 3. " << endl;
    cout << "========================= ";
    int inpur1orr2orr3;
    cin >> inpur1orr2orr3;

    if (inpur1orr2orr3 == 1) {

  

        cout << "Enter account password: ";
        cin >> accNum;
        myAccount.setaccountnumber(accNum);

        cout << "Enter account name: ";
        cin >> accName;
        myAccount.setaccountName(accName);

        cout << "Enter balance: ";;
        cin >> bal;
        myAccount.setbalance(bal);

        cout << "===============================" << endl;

        

        do
        {
            cout << "-------------------------------\n";
            cout << "1. check balance" << endl;
            cout << "2. deposit" << endl;
            cout << "3. withdraw" << endl;
            cout << "4. account information " << endl;
            cout << "5. exit" << endl;

            cout << "-------------------------------";

            cin >> option;
            switch (option)
            {
            case 1:  cout << "your balance: " << myAccount.getBalance() << endl;
                break;

            case 2:cout << "Enter deposit amount: ";
                cin >> depamountt;
                myAccount.deposit(depamountt);
                break;

            case 3:cout << "Enter withdrawal amount: ";
                cin >> withdrawall;
                myAccount.withdraw(withdrawall);
                break;

            case 4:cout << "your account name: " << myAccount.getAccountName() << endl;
                cout << "your password number: " << myAccount.getAccountNumber() << endl;
                cout << "your account balance: " << myAccount.getBalance() << endl;
                break;

            case 5: goto i;

            }


        } while (option != 5);

    }
    if(inpur1orr2orr3==2){

        cout << "enter your name: ";
       
        cin >> inputname;
        
        cout << "enter your password: ";
        
        cin >> inputpassword;

        for (int i = 0; i < 1;i++) {

            if (inputname == myAccount.getAccountName() || inputpassword == myAccount.getAccountNumber()) {

                

                do
                {
                    cout << "-------------------------------\n";
                    cout << "\t wellcome " << inputname << endl<<endl;
                    cout << "1. check balance" << endl;
                    cout << "2. deposit" << endl;
                    cout << "3. withdraw" << endl;
                    cout << "4. account information " << endl;
                    cout << "5. exit" << endl;

                    cout << "-------------------------------";

                    cin >> option;
                    switch (option)
                    {
                    case 1:  cout << "your balance: " << myAccount.getBalance() << endl;
                        break;

                    case 2:cout << "Enter deposit amount: ";
                        cin >> depamountt;
                        myAccount.deposit(depamountt);
                        break;

                    case 3:cout << "Enter withdrawal amount: ";
                        cin >> withdrawall;
                        myAccount.withdraw(withdrawall);
                        break;

                    case 4:cout << "your account name: " << myAccount.getAccountName() << endl;
                        cout << "your id number: " << myAccount.getAccountNumber() << endl;
                        cout << "your account balance: " << myAccount.getBalance() << endl;
                        break;

                    case 5: cout << "exiting....\n";

                    }


                } while (option != 5);

            }
            else
            {
                cout << "\n   not found ):"<<endl;
            }


            
        }


    }
    else
    {
        cout << "exiting...";
    }
    
}
