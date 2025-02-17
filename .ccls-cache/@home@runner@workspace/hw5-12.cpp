//hw5-12.cpp - displays the total owed
//Created/revised by Kyle Gallagher on 02/17/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
	double first_price;
	double second_price;
	double total_amount=0.0;
	cout<<"Enter the first price: ";
	cin>>first_price;
	cout<<"Enter the second price: ";
	cin>>second_price;
	if(first_price > second_price){
		total_amount = first_price + (second_price/2);
	} else if (second_price > first_price){
		total_amount = second_price + (first_price/2);
	} else if (first_price == second_price){
		total_amount = first_price + (second_price/2);
	}else{
		cout<<"Invalid input"<<endl;
	}
		cout<<"Total amount owed: $"<<fixed<<setprecision(2)<<total_amount<<endl;
	return 0;
}	//end of main function