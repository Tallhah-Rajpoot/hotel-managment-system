#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<string>
using namespace std;


void gotoxy(int x, int y)
{
	COORD coord;
    	coord.X =x;
	coord.Y =y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class HotelMenu{
	
	public:
		
	void project()
{
	system("mode 100");
	ifstream file;
	file.open("project.txt");
	if(!file.is_open())
	{
		cout<<"unable to open file:";
	}
	else
	{
		string c;
		getline(file,c);
		while(!file.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(file,c);
		}
	}
}


void wellcom()
{
	system("mode 100");
	ifstream file;
	file.open("start.txt");
	if(!file.is_open())
	{
		cout<<"file unable to open successfully:  ";
	}
	else
	{
	string a;
	getline(file,a);
	
		while(!file.eof())
		{
			system("color a");
			cout<<a<<endl;
		getline(file,a);
		}
		file.close();	
}
}

int password(){
	first:
	system("cls");
	system("color 1a");
	string a,b,c,d,e,f,g; 
	cout<<"\n\nNOTE:\n\tTHIS PROGRAM CAN ONLY EXICUTTED BY AN AUTHORIZE PERSON OF HOTTEL\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\n\n\n\n\n\t\tENTER THE PASWARD:         [      ]\b\b\b\b\b\b\b";
	
		a=getch();
		cout<<"*";
		b=getch();
		cout<<"*";
		c=getch();
		cout<<"*";
		d=getch();
		cout<<"*";
		e=getch();
		cout<<"*";
		f=getch();
		cout<<"*";

	if((a=="0" && b=="0") && (c=="0"&& d=="0") && (e=="0" && f=="0"))
	{
		//   pasward excuted	
	}
	else 
	{
		system("color 1c");
		cout<<"\a"<<endl;
		cout<<"\n\n\n\n\n\t\t\t|***********************|"<<endl;
		cout<<"\t\t\t|                       |"<<endl;
		cout<<"\t\t\t|    WRONG PASWARD      |"<<endl;
		cout<<"\t\t\t|                       |"<<endl;
		cout<<"\t\t\t|***********************|"<<endl;
		l:
		string h;
		cout<<"\n\n\n\n\t\t\tARE YOU WANT TO TRY AGAIN (yes/no):       ";
		cin>>h;
		if(h=="yes" || h=="YES")
		{
					goto first;
		}else if(h=="no" || h=="NO")
		{
			return 0;
		}else if((h!="yes" || h!="YES") && (h!="no" || h!="NO") )
		{
			goto l;
		}

	}	
	
}

	void Loading(){
	
	system("cls");
	int r,q,i=0,j;
	char s=178;
	gotoxy(46,24);
	cout<<"loading..."<<endl;
	for(r=1,i=0,j=40; r<20,i<=100,j<=60; r++,i=i+5,j++)
	{
		for(q=0; q<5; q++)
		system("color a");
		gotoxy(j,25);
		cout<<s;
		gotoxy(47,27);
		cout<<i<<"%";
	}
}

void MainMenu(){
	system("cls");
	ifstream menu;
	menu.open("menu.txt");
	if(!menu.is_open())
	{
		cout<<"unable to open file: ";
	}else
	{
		string c;
		getline(menu,c);
		while(!menu.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(menu,c);
		}
	}
}

void HotelInformation(){
	system("cls");
	ifstream HIF;
	HIF.open("hotel.txt");
	if(!HIF.is_open())
	{
	cout<<"unable to open a file:  ";
	}else
	{
		string c;
		getline(HIF,c);
		while(!HIF.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(HIF,c);
		}
	}
}

void RacipeesMenu(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 -------------------------------- ADD NEW RACIPEE |"<<endl;
	cout<<"\n\t\t\t| 2 ----------------------------------- RACIPEE LIST |"<<endl;
	cout<<"\n\t\t\t| 3 --------------------------------- SEARCH RACIPEE |"<<endl;
	cout<<"\n\t\t\t| 4 --------------------------------- DELETE RACIPEE |"<<endl;
	cout<<"\n\t\t\t| 5 --------------------------------- UPDATE RACIPEE |"<<endl;
	cout<<"\n\t\t\t| 6 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 7 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	
}


void RoomMenu(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 ----------------------------------- ADD NEW GEST |"<<endl;
	cout<<"\n\t\t\t| 2 -------------------------------------- GEST LIST |"<<endl;
	cout<<"\n\t\t\t| 3 ------------------------------------ SEARCH GEST |"<<endl;
	cout<<"\n\t\t\t| 4 ------------------------------------ DELETE GEST |"<<endl;
	cout<<"\n\t\t\t| 5 ------------------------------------ UPDATE GEST |"<<endl;
	cout<<"\n\t\t\t| 6 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 7 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
}

void WorkerMenu(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 --------------------------------- ADD NEW WORKER |"<<endl;
	cout<<"\n\t\t\t| 2 ------------------------------------ WORKER LIST |"<<endl;
	cout<<"\n\t\t\t| 3 ---------------------------------- SEARCH WORKER |"<<endl;
	cout<<"\n\t\t\t| 4 ---------------------------------- DELETE WORKER |"<<endl;
	cout<<"\n\t\t\t| 5 ---------------------------------- UPDATE WORKER |"<<endl;
	cout<<"\n\t\t\t| 6 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 7 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
}



};
