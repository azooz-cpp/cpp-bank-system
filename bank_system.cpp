#include <iostream>
#include <limits>
using namespace std;

int main() {
    
    string Password, Password_storage;
    cout << "Enter Your Password:\n";
    cin >> Password;


    cout << "Enter Your Password Again:\n";
    cin >> Password_storage;
    

    int i = 3;

    while (i >= 1) {

        
        if (Password != Password_storage) {

            cout << ".................\n";
            cout << "Error,Enter Your Password:\n";
            cout << "Number of attempts remaining:" << i - 1 << endl;
            cin >> Password_storage;
       
       
        }
        else if (Password == Password_storage) {
            cout << "Login successfully." << endl;

            break;
        }
       
        i--;
    }
     
   if (i == 0) {
        cout << "**********************************" << endl;
        cout << "Attempts completed:[" << i << "]" << endl;
        cout << "Your bank account has been closed. Please contact your bank." << endl;
    }
    

   cout << "*********************************\n";
   cout << "Bank account information:\n";

  

 
   string Customer_name = "Abdul aziz.";
   
   double Amount_of_money = 500.10;
   double copy_Amount_of_money = Amount_of_money;
   

   
   double Withdraw_the_amount = 0.0;

   
   double Add_amount = 0.0;

   
   int Transaction_number = 0;

   cout << "Welcome:" << Customer_name << endl;
   cout << "Your current balance is:" << Amount_of_money << endl;
   cout << "......................" << endl;

   
   cout << "Choose the transaction number: Withdraw an amount[1], Deposit[2], Exit[3]:" << endl;
   cin >> Transaction_number;
   
   
  
   int j = 3;
  
   while (j >= 1) {
       
       if (cin.fail()) {
          

           cout << "Error, Choose the transaction number: Withdrawal[1], Deposit[2], Exit[3]: j[" << j - 1 << "]" << endl;
          
           cin.clear();

           cin.ignore(numeric_limits<streamsize>::max(), '\n');

           cin >> Transaction_number;
       }
       else if (Transaction_number > 3 || Transaction_number <= 0) {

           cout << "The number must be from 1 to 3:" << endl;
           cout << "Enter Number Again:[j] " << j << endl;
           cin >> Transaction_number;
       }
  
       else 
       {
           
           break;
       }
    
       
       j--;
   }
   if (j == 0) {

       cout << "Your number of transactions has been exhausted:[" << j << "] Your bank account is closed. Please contact your bank." << endl;
   }
   else if (Transaction_number == 1) {

       
       cout << "You have chosen to withdraw a balance, Enter the amount value:" << endl;
       cin >> Withdraw_the_amount;

       if (cin.fail()) {
           cout << "Error, Enter Number." << endl;
       }
       else {
             if (Withdraw_the_amount > Amount_of_money) {

           cout << "Error :" << Withdraw_the_amount << ">" << Amount_of_money << endl;
       }
       else {
           Amount_of_money = Amount_of_money - Withdraw_the_amount;
           cout << "An amount has been deducted:[" << Withdraw_the_amount << "] from The basic amount:[" << "" << copy_Amount_of_money << " - " << Withdraw_the_amount << "] = " << Amount_of_money << endl;
       }
      
       }

      

       

   }
   else if (Transaction_number == 2)
   {
       cout << "you have chosen to deposit funds, Enter the amount value:" << endl;
       cin >> Add_amount;

       if (cin.fail()) {
           cout << "Error, Enter Number." << endl;
       }
       else {
       
       Amount_of_money = Amount_of_money + Add_amount;

       cout << "Amount added:[" << Add_amount << "] from The basic amount:[" << "" << copy_Amount_of_money << " + " << Add_amount << "] = " << Amount_of_money << endl;
      }
   }
   else  {
       cout << "You have selected option [" << i << "] Exit,Regards, Future Bank, for stealing your money.." << endl;
   }

   
  
   
    return 0;
}