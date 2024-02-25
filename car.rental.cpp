#include<iostream>
#include<string>
using namespace std;
int main()
{
	int choise,age,user1,user2,user3,user4,user5;
	string name;
	   cout<<"WELCOME TO AP CAR RENTALS"<<endl;
        cout<<"we provide you the best vechile rental service"<<endl;               
       cout<<"enter your name"<<endl;
	   cin>>name;
	   cout<<"enter your age"<<endl;
	   cin>>age;
	   if(age>=18)
	   {
	   
	   cout<<"current stock"<<endl;
                cout<<" press 1 for activa"<<endl;
                cout<<"press 2 for bikes"<<endl;
                cout<<"press 3 for cars"<<endl;
                cout<<"press 4 for supercars"<<endl;
	   cout<<" please select your option"<<endl;
	   cin>>choise;
	   if(choise==1)
	   {
	   	cout<<"WELCOME TO AP CAR RENTALS"<<endl;
	   	cout<<"WE PROVIDE YOU THE BEST CAR RENTAL SERVICES"<<endl;
	   	cout<<"in activa we have..."<<endl;
	   	cout<<"1.activa 6g (150 rs.per day)  "<<endl;
	   	cout<<"2.activa 4g(120 rs.per day)"<<endl;
	   	cout<<"3.activa 125(180 rs.per day)"<<endl;
	   	cout<<" which one you would like to purchase"<<endl;
	   	cin>>user1;
	   	if(user1==1)
	   	{
	   		cout<<"thanks for booking activa 6g"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
		   }
		   if(user1==2)
		   {
		   		cout<<"thanks for booking activa 4g"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
		   }
		   if(user1==3)
		   {
		   		cout<<"thanks for booking activa 125"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
		   }
	   	
		}    
		if (choise==2)
		{
			 	cout<<"WELCOME TO AP CAR RENTALS"<<endl;
	   	cout<<"WE PROVIDE YOU THE BEST CAR RENTAL SERVICES"<<endl;
	   cout<<" in bikes we have"<<endl;
	   cout<<"1.splender(100 rs per day)"<<endl;
	   cout<<"2.platina(80 rs per day)"<<endl;
	   cout<<"3.pulsar(200 rs per day)"<<endl;
	   cout<<"which bike do you want"<<endl;
	   cin>>user2;
	   if(user2==1){
	   		cout<<"thanks for booking splender"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
	   }
	   if(user2==2){
	   		cout<<"thanks for booking platina"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
	   }
	   if(user2==3)
	   {
	   		cout<<"thanks for booking pulsar"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
	   }
	   	
	 }   
	 if(choise==3)
	 {
	 		cout<<"WELCOME TO AP CAR RENTALS"<<" "<<name<<endl;
	   	cout<<"WE PROVIDE YOU THE BEST CAR RENTAL SERVICES"<<endl;
	   	cout<<"in cars we have"<<endl;
	   	cout<<"1.fortuner (8k per day)"<<endl;
	   	cout<<"2.endevour (8k per day)"<<endl;
	   	cout<<"3.ertiga (5k per day)"<<endl;
	   	cout<<"which car do you want to rent"<<endl;
	   	cin>>user3;
	   	if(user3==1)
	   	{
	   		cout<<"thanks for booking fortuner"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
		   }
		   if(user3==2)
		   {
		   	cout<<"thanks for booking endevour"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
		   }
		   if(user3==3)
		   {
		   	cout<<"thanks for booking ertiga"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
		   }
	  } 
	  if(choise==4)
	  {
	  	cout<<"DO YOU CAN AFFORD SUPER CARS"<<endl;
	  	
	  	cout<<" TYPE 1 TO CONIRM OR 2 TO GO BACK"<<endl;
	  	cin>>user4;
	  	if(user4== 1)
	  	{
	  			cout<<"ook then..."<<endl;
	  		cout<<"WELCOME TO AP CAR RENTALS"<<endl;
	   	cout<<"WE PROVIDE YOU THE BEST CAR RENTAL SERVICES"<<endl;
	   
	   	cout<<"in supercars we have"<<endl;
	   	cout<<"1.supra(80k per day)"<<endl;
	   	cout<<"2.lambo(81k per day)"<<endl;
	   	cout<<"3.ferrari(90k per day)"<<endl;
	   	cout<<"which super car you can afford??"<<endl;
	   	cin>>user5;
	   	if(user5==1)
	   	{
	   			cout<<"thanks for supra"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
		   }
		   if(user5==2)
		   {
		   		cout<<"thanks for booking ferrari"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
		   }
		   if(user5==3)
		   {
		   		cout<<"thanks for booking lambo"<<" "<<name<<endl;
	   		cout<<"it would be transferd to your current location"<<endl;
		   }
		  }
		  if(user4==2)
		  {
		  	cout<<" ok throwing you to main page"<<endl;
		  	main();
		  }
		  else
		  {
		  	
		  }
	  	
	  }
   }
   else
   {
   	cout<<" soory we cant provide services for minors"<<endl;
   }
}
