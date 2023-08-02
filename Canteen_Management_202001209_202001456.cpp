/******************************************************************************
Canteen Management Project
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<iostream>

void loadingbar();
void cls();

void pwellcome();
void ending();


using namespace std;

int main()
{
	char name[30],
	pizza1[]="Spicy Ranch Pizza" ,pizza2[]="Margherita pizza" ,pizza3[]="Hawaiian pizza" ,pizza4[]="Veg Supreme Pizza",
	par1[]="Gobi Paratha", par2[]="Aloo paratha", par3[]="Paneer Paratha",
	bur1[]="Paneer Burger",bur2[]="Aloo Tikki Burger",bur3[]="Momo Burger";
	char sand1[]="Club Sandwich", sand2[]="Paneer Sandwich", sand3[]="Falafel Sandwich";
	char bir1[]="Chicken Biryani", bir2[]="Schezwan Biryani", bir3[]="Veg Pulao",bir4[]="Rajma Chawal",gotostart ;
	int choice=0,pchoice,pchoice1, quantity,t=0;

	loadingbar();
	cls();
	pwellcome();
	Sleep(300);
	cls();




	beginning:
	system("CLS");
	cout<<"\t\t\t----------MIC MAC CANTEEN-----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin.getline(name, 20);
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Pizza\n";
	cout<<"2) Burger\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Paratha\n";
	cout<<"5) Rice Dishes\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2) "<<pizza2<<"\n";
		cout<<"3) "<<pizza3<<"\n";
		cout<<"4) "<<pizza4<<"\n";
		cout<<"\n Which pizza would you like to have?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=5)
		{
			cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 250*quantity+t;
			t=choice;
			break;

			case 2: choice = 500*quantity+t;
			t=choice;
			break;

			case 3: choice = 900*quantity+t;
			t=choice;
			break;


			      }
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza1;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<pizza2;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS:  "<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza3;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza4;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}



		}

	 }


	 else if(choice==2)
	 {
		cout<<"\n1 "<<bur1<<" Rs.180"<<"\n";
		cout<<"2 "<<bur2<<" Rs.150"<<"\n";
		cout<<"3 "<<bur3<<" Rs.110"<<"\n";

		cout<<"\nWhich Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 180*quantity+t;
			t=choice;
			break;

			case 2: choice = 150*quantity+t;
			t=choice;
			break;

			case 3: choice = 110*quantity+t;
			t=choice;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur1;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bur2;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur3;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

 }
}
	else if(choice==3)
	 {
		cout<<"\n1  "<<sand1<<" Rs.220"<<"\n";
		cout<<"2  "<<sand2<<" Rs.160"<<"\n";
		cout<<"3  "<<sand3<<" Rs.100"<<"\n";

		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 220*quantity+t;
			t=choice;
			break;

			case 2: choice = 160*quantity+t;
			t=choice;
			break;

			case 3: choice = 100*quantity+t;
			t=choice;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand1;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<sand2;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand2;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


	 else if(choice==4)
	 {
		cout<<"\n1 "<<par1<<" Rs.150"<<"\n";
		cout<<"2 "<<par2<<" Rs.100"<<"\n";
		cout<<"3 "<<par3<<" Rs.120"<<"\n";

		cout<<"\nWhich paratha you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow many parathas will you like? : ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity+t;
			t=choice;
			break;

			case 2: choice = 100*quantity+t;
			t=choice;
			break;

			case 3: choice = 120*quantity+t;
            t=choice;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<par1;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 15 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<par2;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 10 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<par3;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 10 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;


			}
            cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;

			}
 }
}
	else if(choice==5)
	 {
		cout<<"\n1 "<<bir1<<" Rs.160"<<"\n";
		cout<<"2 "<<bir2<<" Rs.220"<<"\n";
		cout<<"3 "<<bir3<<" Rs.140"<<"\n";
		cout<<"4 "<<bir4<<" RS 100"<<"\n";
		cout<<"\nWhich dish would you like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 160*quantity+t;
			t=choice;;
			break;

			case 2: choice = 220*quantity+t;
			choice=t;
			break;

			case 3: choice = 140*quantity+t;
			t=choice;
			break;

			case 4: choice = 100*quantity+t;
            t=choice;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bir1;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bir2;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bir3;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;

             case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bir4;
			 cout<<"\nCustomer name:"<<name;
			 cout<<"\nYour Total Bill is RS: "<<choice<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From MIC MAC CANTEEN\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;

			}
			}
			}

			else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;

			}
			}

                cls();
			    ending();



     getch();
}



void loadingbar(void){

	for (int i=15;i<=100;i+=5){

		cls();

		cout<<"\n\n\n\n\n\n\n\t\t\t\t";
		cout<<"%d %% Loading...\n\n\t\t"<<i;

		cout<<" ";

		for (int j=0; j<i;j+=2){


			cout<<" ";

		}
		Sleep(100);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(100);
		}

	}

}
void pwellcome(){

	char welcome[50]="WELCOME";
	char welcome2[50]=" TO";
	char welcome3[50]=" MIC MAC";
	char welcome4[50]=" CANTEEN";
	cout<<"\n\n\n\n\n\t\t\t";
	for(int wlc=0; wlc<strlen(welcome);wlc++){

		cout<<welcome[wlc];
		Sleep(100);
	}

	cout<<"\n\n\t\t\t\t ";
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){

		cout<<welcome2[wlc2];
		Sleep(100);
	}

	cout<<"\n\n\t\t\t\t ";
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){

			cout<<welcome3[wlc3];
		}
		else{

			cout<<welcome3[wlc3];
		}

		Sleep(100);
	}

	cout<<"\n\n\t\t\t\t ";
	for(int wlc3=0; wlc3<strlen(welcome4) ;wlc3++){
		if(welcome4[wlc3]!='A' && welcome4[wlc3]!='E'){

			cout<<welcome4[wlc3];
		}
		else{

			cout<<welcome4[wlc3];
		}
		Sleep(100);
	}


}

void cls(){

	system("cls");
}

void ending(){

	char welcome[50]="THANK YOU";
	char welcome2[50]=" FOR USING";
	char welcome3[50]=" MIC MAC CANTEEN";
	char welcome4[50]=" -BY: RISHABH & AMOL";
	cout<<"\n\n\t\t\t\t ";
	for(int wlc=0; wlc<strlen(welcome);wlc++){

		cout<<welcome[wlc];
		Sleep(100);
	}

	cout<<"\n\n\t\t\t\t ";
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){

		cout<<welcome2[wlc2];
		Sleep(100);
	}

	cout<<"\n\n\t\t\t\t ";
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){

			cout<<welcome3[wlc3];
		}
		else{

			cout<<welcome3[wlc3];
		}

		Sleep(100);
	}

	cout<<"\n\n\t\t\t\t ";
	for(int wlc3=0; wlc3<strlen(welcome4) ;wlc3++){
		if(welcome4[wlc3]!='A' && welcome4[wlc3]!='E'){

			cout<<welcome4[wlc3];
		}
		else{

			cout<<welcome4[wlc3];
		}
		Sleep(100);
	}


}
