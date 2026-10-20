#include <iostream>
using namespace std;

class student {
	//encalpsulation
private:
		string student_name;
		string admission_number;
		double feeBalance;
		
public:
  	void inputstudentdata() {
 		cout<< "Enter Student Nmae: " ;
 		cin>> student_name;
    		
 		cout<<"Enter Admission Number: ";
 		cin>> admission_number;
    		
 		cout<<"Enter Fee Balance: ";
 		cin>> feeBalance ;
		 }
    
	 void makePayment( double amount) {
		 if (amount > 0) {
			 if (amount <= feeBalance){
			 	feeBalance -=amount;
			 cout << "\nPayment of KES " << amount << " processed successfully.\n";
			 }
		 	else{
				 cout << "\n Error: Payment amount exceeds the current fee balance.\n";
			 }
	 	} else {
			 cout << "\nError: Invalid payment amount.\n";
		 }
	 }	 
	 void displaystatus (){
	    cout << "\n==============================\n";
        cout << "       STUDENT FEE STATUS     \n";
        cout << "==============================\n";
        cout << "Student Name:     " << student_name << endl;
        cout << "Admission Number: " << admission_number << endl;
        cout << "Fee Balance:      KSH " << feeBalance << endl;
        cout << "==============================\n";
	 }
};
int main () {
	student S1;
	
    cout<<" ---Enter student detais--  \n";
    S1.inputstudentdata();

    // Display the initial status
    S1.displaystatus();

    // Process a fee payment
    double paymentamount;
    cout << "Enter payment amount to make: KSH ";
    cin >> paymentamount;
    
    S1.makePayment(paymentamount);

    // updated status
    S1.displaystatus();

    return 0;
}
  