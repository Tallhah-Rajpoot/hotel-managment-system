#include<iostream>
#include<conio.h>
using namespace std;

struct Recipes{
	string name;
    int price;
    string chief;
    Recipes *next;
};

class RacipeeDetails{
	private:
		Recipes *head , *tail;
	public :
		Transport(){
			head = NULL;
			tail = NULL;
		}
		
		
	void NewRacipee(string name,int price,string chief){
			
			Recipes *newRacip = new Recipes();
			newRacip->name  = name;
			newRacip->price = price;
			newRacip->chief = chief;
				if(head == NULL){
					newRacip->next = head;
					head =  newRacip;
					tail = newRacip;
				}else{
					tail->next = newRacip;
					tail = newRacip;
				}
		
		
	}
	
	void DeleteRacipee(string name){
		Recipes *current = new Recipes();
		Recipes *privous = new Recipes();
		current = head;
		while(current != NULL){
			
			if(current->name == name)
			 break;
			 privous = current;
			 current = current->next;
		}
		if(current != NULL){
			if(name == current->name){
			string op;
			cout<<"Are you sure to delete:(yes/no)    ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				privous->next = current->next;
				delete current;
				cout<<"Record of "<<name<<" Recipes is deleted Successfully"<<endl;
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}		
			
		}	
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about "<<name<<" Recipes"<<endl;
		}
	}
	
	
	void SearchRacipee(string name){
		Recipes *current = new Recipes();
		Recipes *privous = new Recipes();
		current = head;
		while(current != NULL){
			privous = current;
			if(current->name == name)
			 break;
			 
			 current = current->next;
		}
		
		if(name == privous->name){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tNO Plate of recipes\t\t\t\t"<<current->name<<endl;
			cout<<"\t\trecipes Type\t\t\t\t\t"<<current->price<<endl;
			cout<<"\t\tPrice of recipies\t\t\t\t"<<current->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about "<<name<<" Racipee"<<endl;
			string op;
			cout<<"Are you watn to Serach Again:(yes/no)          ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}
		}
	}
	
	void UpdateRacipee(string name){
		Recipes *current = new Recipes();
		current = head;
		while(current != NULL){
			
			if(current->name == name)
			 break;
			 
			 current = current->next;
		}
		if(current != NULL){
			if(current->name == name){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRacipee Name\t\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tRacipee Price\t\t\t\t\t"<<current->price<<endl;
			cout<<"\t\tChief OF Racipee\t\t\t\t"<<current->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			string op;
			cout<<"Are you Want to update:            ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				string chief,name;
				int price;
				cout<<"\n\n\t\tEnter Racipee Name:                        ";
				cin>>name;
				cout<<"\n\n\t\tEnter Racipee Price:                       ";
				cin>>price;
				cout<<"\n\n\t\tEnter Racipee Chief:                       ";
				cin>>chief;
				current->name  = name;
				current->price = price;
				current->chief = chief;
				cout<<"Updated Successfully"<<endl;
			}
		}
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about Racipee "<<name<<endl;
		}
	}
	
	void ShowAllRacipees(){
		Recipes *showRacip = new Recipes;
		showRacip = head;
		while(showRacip  != NULL){
			
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRacipee Name\t\t\t\t\t"<<showRacip->name<<endl;
			cout<<"\t\tRacipee Price\t\t\t\t\t"<<showRacip->price<<endl;
			cout<<"\t\tChief OF Racipee\t\t\t\t"<<showRacip->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			showRacip = showRacip->next;
		}
	}
};
