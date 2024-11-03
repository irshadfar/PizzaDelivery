#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
	
	int input;
	int order,quantity;
	char character,choice,receipt;
	float payment,balance;
	time_t now = time(0);
	char* dt=ctime(&now);
	const float set1=8.99;
	const float set2=16.99;
	const float set3=11.50;
	const float set4=9.99;

//All of the variables are listed above and their data type
	
	system("cls");
	cout << "          |        THE PIZZA SHOP         |"<<endl;
	cout << "  |                                             |"<<endl;
	cout << "  |  Welcome, are you ready to place your order?|"<<endl;
	cout << "  |                    Y/N?                     |"<<endl;
	
	
	
	input:
	cout << "      y to proceed n to cancel [y/n] : ";
	cin >> character;
	
	switch(character){
		case 'Y' :
		case 'y' :
			goto menu;
			break;
		case 'N' :
		
		case 'n' :
			system("PAUSE");
			cout<<"        THANK YOU PLEASE DO REVISIT ANYTIME!!!!!! ";
			exit(EXIT_SUCCESS);	
		   break;
		default :
			cout << "         You enter wrong input"<<endl;
			goto input;
			break;
					
	}
	// Introduction to the pizza and asks for user input if they want to continue or exit 
	
			menu:
			system("cls");	
			cout << "                             The Pizza shop - Menu                 "<<endl;
			cout << "        -----------------------------------------------------------"<<endl;
			cout << "         -     (A)  Kids Meal   -   "<<endl;
			cout << "      | Pizza : Peperoni (X1 coke) "<<endl;
			cout << "      | side : Reg fries   "<<endl;
			cout << "      | Price : £8.99 "<<endl;
			cout << "      ----------------------------"<<endl;
			
			cout << "         -     (B) Family meal!   -   "<<endl;
			cout << "      | Pizza : chicken/beef mix (X3 coke)|  "<<endl;
			cout << "      | Side : Large fries          |"<<endl;
			cout << "      | Price : £16.99  "<<endl;
			cout << "      ----------------------------"<<endl;
			 
			cout << "         -     (C) Cheese     -   "<<endl;
			cout << "      | Pizza : Tangy cheese (X1 coke)|  "<<endl;
			cout << "      | Side : Large fries          |"<<endl;
			cout << "      | Price : £11.50  "<<endl;
			cout << "      ----------------------------"<<endl;

			cout << "         -     (D) Vegeterial Meal   -   "<<endl;
			cout << "      | Pizza : Golden Corn (X1 coke)|  "<<endl;
			cout << "      | Side : Large fries          |"<<endl;
			cout << "      | Price : £9.99  "<<endl;
			cout << "      ----------------------------"<<endl;

			choose:
			cout << "        Choose Set : ";
			cin >> choice;  
			 
			 //The menue if the pizza shop which allows user to pick which one they want it includes everything in the menu
			
			switch(choice){
				case 'A' :
				case 'a' :	
					cout << "   Quantity   : ";
					cin >> quantity; 
					system("cls"); 
					cout << "        You pick Set : A"<<endl;
					cout << "       ---------------------------"<<endl;
					cout << "      | Pizza : Peperoni (X1 coke)"<<endl;
					cout << "      | side : Reg fries     "<<endl;
					cout << "      | Price : £8.99          "<<endl;
					cout << "      |                            "<<endl;
					cout << "       ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "     Quantity  : "<<quantity<<endl;
					cout << "     Your total cost is £ "<<(set1*quantity)<<endl;
					do{
						cout << " Please make your payment : ";
						cin  >> payment;
	
					if(payment>=(set1*quantity)){
		
						balance=payment-(set1*quantity);
						
						cout << " Payment Approved :) your Balance is : " << balance;
					}
					//this here shows what the user picked if they picked set A there is a calculation where the system multiples the price of the set and the quantitiy
					
					else{
			
						cout<< " Payment not enough";
						}
					}while(payment< (set1*quantity));
					x:
					cout << " Do you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
				//includes if statements and while loop if the payment is not enough it keeps on asking until it is paid so it can ask if the user wants a receipt
						
						cout << "      |                   The pizza shop                    |"<<endl;
						cout << "       ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "        Tel  : 07546464568    "<<endl;
						cout << "        Order : A00001        "<<endl;
						cout << endl;
						cout << endl;
						cout << "        Cashier :  John"<<endl;
						cout << endl;
						cout << "        ------------------------------------------------"<<endl;
						cout << "       | Description      Qty     Price      Amount     |"<<endl;
						cout << "       ------------------------------------------------"<<endl;
						cout << "        Set A "<<"   	    "<<quantity<<" 	   "<<set1<<"     "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "        Total "<<"                              "<<set1*quantity<<endl;
						cout << "        Cash "<<"                               "<<payment<<endl;
						cout << "        Balance "<<"                            "<<balance<<endl;
						cout << "       ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "       You enter wrong input!!!"<<endl;
						goto x;
					}
					
					break;
				case 'B' :
				case 'b' :
					cout << "        Quantity   : ";
					cin >> quantity;  
					system("cls");
					cout << "        You pick Set : B"<<endl;
					cout << "         ---------------------------"<<endl;
					cout << "      | Pizza : Beef/chicken mix (X3 coke)"<<endl;
					cout << "      |  side : Large fries  "<<endl;
					cout << "      | Price : £16.99        "<<endl;
					cout << "         ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "      Quantity  : "<<quantity<<endl;
					cout << "        Your total cost is £ "<<(set2*quantity)<<endl;
					do{
					cout << "          Please make your payment: ";
					cin  >> payment;
	
					if(payment>=(set2*quantity)){
		
					balance=payment-(set2*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "        Payment Approved :) Your balance is: " << balance<<endl;
		
					}
					else{
			
					cout<< "         Payment not enough";
					}
					}while(payment<(set2*quantity));
					y:
					cout << "         Do you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						
						cout << "      |                   The pizza shop                |"<<endl;
						cout << "       ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "        Tel  : 07546464568                      "<<endl;
						cout << "        Order : A00002                           "<<endl;
						cout << endl;
						cout << endl;
						cout << "        Cashier :  BOB"<<endl;
						cout << endl;
						cout << "       ------------------------------------------------"<<endl;
						cout << "       Description      Qty     Price      Amount     "<<endl;
						cout << "       ------------------------------------------------"<<endl;
						cout << "        Set B "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "        Total "<<"                              "<<set1*quantity<<endl;
						cout << "        Cash "<<"                               "<<payment<<endl;
						cout << "        Balance "<<"                            "<<balance<<endl;
						cout << "       ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "       You enter wrong input!!!"<<endl;
						goto y;
					}	
					break;
				case 'C' :
				case 'c' :	
					cout << "        Quantity   : ";
					cin >> quantity;  
					system("cls");
					cout << "       You pick Set : C"<<endl;
					cout << "       ---------------------------"<<endl;
					cout << "      | Pizza : Deluxe Cheese "<<endl;
					cout << "      | Side  : Large fries "<<endl;
					cout << "      | Price : £11.50    "<<endl;
					cout << "       ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "       Quantity  : "<<quantity<<endl;
					cout << "       Your total cost is £ "<<(set3*quantity)<<endl;
					do{
					cout << "          Please make your payment: ";
					cin  >> payment;
	
					if(payment>=(set3*quantity)){
		
					balance=payment-(set3*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "        Payment Approved ;) Your balance is £: " << balance<<endl;
		
					}
					else{
			
					cout<< "        Payment not enough";
					}
					}while(payment<(set3*quantity));
					z:
					cout << "       Do you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						
						cout << "      |                   The pizza shop                 |"<<endl;
						cout << "        ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "        Tel  : 07546464568                       "<<endl;
						cout << "        Order : C00003                          "<<endl;
						cout << endl;
						cout << endl;
						cout << "        Cashier :  James"<<endl;
						cout << endl;
						cout << "       ------------------------------------------------"<<endl;
						cout << "      | Description      Qty     Price      Amount     |"<<endl;
						cout << "       ------------------------------------------------"<<endl;
						cout << "        Set C "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "        Total "<<"                              "<<set1*quantity<<endl;
						cout << "        Cash "<<"                               "<<payment<<endl;
						cout << "        Balance "<<"                            "<<balance<<endl;
						cout << "       ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "      You enter wrong input!!!"<<endl;
						goto z;
					}	
					break;
				case 'D' :
				case 'd' :	
					cout << "         Quantity   : ";
					cin >> quantity;  
					system("cls");
					cout << "        You pick Set D"<<endl;
					cout << "        ---------------------------"<<endl;
					cout << "      | Pizza : Golden corn (X1 coke)"<<endl;
					cout << "      | Side  : Large fries      "<<endl;
					cout << "      | Price : £9.99                "<<endl;
					cout << "        ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "        Your total cost is £ "<<(set4*quantity)<<endl;
					do{
					cout << "        Please make your payment £: ";
					cin  >> payment;
	
					if(payment>=(set4*quantity)){ 
		
					balance=payment-(set4*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "         Payment Approved ;) Your balance is £:" << balance<<endl;
		
					}
					else{
			
					cout<< "         Payment not enough";
					}
					}while(payment<(set4*quantity));
					s:
					cout << "        Do you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "   "<<endl;
						cout << "      |                   Pizza shop                     |"<<endl;
						cout << "        ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "        Tel  : 07546464568    "<<endl;
						cout << "        Order : D000004    "<<endl;
						cout << endl;
						cout << endl;
						cout << "        Cashier :  Zack"<<endl;
						cout << endl;
						cout << "       ------------------------------------------------"<<endl;
						cout << "      | Description      Qty     Price      Amount     |"<<endl;
						cout << "       ------------------------------------------------"<<endl;
						cout << "        Set D "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "        Total "<<"                              "<<set1*quantity<<endl;
						cout << "        Cash "<<"                               "<<payment<<endl;
						cout << "        Balance "<<"                            "<<balance<<endl;
						cout << "        ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "       You enter wrong input!!!"<<endl;
						goto s;
					}	
					break;
				default : 
					cout << "          Set not Available"<<endl;
					goto choose;
					break;
				}
				
				inmenu:
				system("PAUSE");
				cout << "       Menu : "<<endl;
				cout << endl;
				cout << "1. Order again"<<endl;
				cout << "2. Exit"<<endl;
				
				cout << "Enter choice :";
				cin >> input;
				
				switch(input){
					case 1 :
						goto menu;
						break;
					case 2 :
						cout << "   Thank you please come again |"<<endl;
						cout << " -----------------------------"<<endl;
						system("PAUSE");
						exit(EXIT_SUCCESS);	
						break;
					default :
						cout << "  You enter wrong input"<<endl;
						goto inmenu;
						break;	
				}
			
		  
	}
               //It gives the user two options if they press 1 it goes back to the menue if 2 then it print out the message above
