//lab5-3.cpp - displays the total amount due
//Created/revised by Kyle Gallagher on 02/17/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
	double purchase_price;
	double LO_shipping_fee = 0.99;
	double SO_shipping_fee = 4.99;
	double discount = 0.1;
	double Default = 0.05;
	double total_amount;
	char member;

	cout<<"Enter the purchase price: ";
	cin>>purchase_price;
	cout<<"Are you a member? (Y/N): ";
	cin>>member;
	if (toupper(member) == 'Y'){
			total_amount = purchase_price - (purchase_price * discount);
			if(total_amount > 100.00){
				total_amount+=(LO_shipping_fee);
				cout<<"Total amount owed: $"<<fixed<<setprecision(2)<<total_amount<<endl;
			}else{
				total_amount+=(SO_shipping_fee);
			} 

	} else if (toupper(member) == 'N'){
		total_amount = purchase_price - (purchase_price * Default);
		if(total_amount > 100.00){
			total_amount+=(LO_shipping_fee);
			cout<<"Total amount owed: $"<<fixed<<setprecision(2)<<total_amount<<endl;
		}else{
			total_amount+=(SO_shipping_fee);
		} 
	}else{
		cout<<"Invalid input"<<endl;
	}
	return 0;
}	//end of main function