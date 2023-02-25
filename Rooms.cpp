#include<iostream>
#include<conio.h>
using namespace std;

struct Rooms{
	string room;
	string gest;
    string date;
    string family;
    string stay;
	string from;
    Rooms *next;
};


class RoomsDetails{
	private:
		Rooms *head , *tail;
	public :
		Transport(){
			head = NULL;
			tail = NULL;
		}
		
		
	string NewGest(string room,string gest,string date,string family,string stay,string from){
		
		if(head == NULL){
			Rooms *newGest = new Rooms();
			newGest->room  = room;
			newGest->gest = gest;
			newGest->date = date;
			newGest->family = family;
			newGest->stay = stay;
			newGest->from = from;
			newGest->next = head;
			head =  newGest;
			tail = newGest;
			string stat = "Data is Added Successfully";
			return stat;
		}else{
			Rooms *curr = new Rooms();
			Rooms *priv = new Rooms();
			curr = head;
			while(curr != NULL){
				priv = curr;
				if(curr->room == room)
				break; 
			 curr = curr->next;
			}
			
			if(priv->room == room){
				string stat = "Room is Already BOOKED";
				return stat;
			
			}else{
				
				Rooms *newGest = new Rooms();	
				newGest->room  = room;
				newGest->gest = gest;
				newGest->date = date;
				newGest->family = family;
				newGest->stay = stay;
				newGest->from = from;
				newGest->next = NULL;
				tail->next = newGest;
				tail = newGest;
				string stat = "Data is Added Successfully";
				return stat;
			}
		}
	}
	
	void DeleteGest(string room){
		Rooms *current = new Rooms();
		Rooms *privous = new Rooms();
		current = head;
		while(current != NULL){
			
			if(current->room == room)
			 break;
			 privous = current;
			 current = current->next;
		}
		
		if(current != NULL){
			if(room == current->room){
			string op;
			cout<<"Are you sure to delete:(yes/no)    ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				privous->next = current->next;
				delete current;
				cout<<"Record of Room "<<room<<" is deleted Successfully"<<endl;
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}		
			
			}
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about Room"<<room<<endl;
		}
	}
	
	
	void SearchGest(string room){
		Rooms *scurrent = new Rooms();
		Rooms *sprivous = new Rooms();
		scurrent = head;
		while(scurrent != NULL){
			if(scurrent->room == room)
			 break;
			 
			 scurrent = scurrent->next;
		}
		if(scurrent != NULL){
			if(scurrent->room == room){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRoom\t\t\t\t\t\t"<<scurrent->room<<endl;
			cout<<"\t\tGEST Name\t\t\t\t\t"<<scurrent->gest<<endl;
			cout<<"\t\tDATE\t\t\t\t\t\t"<<scurrent->date<<endl;
			cout<<"\t\tfAMILY Type\t\t\t\t\t"<<scurrent->family<<endl;
			cout<<"\t\tDays Will Stay\t\t\t\t\t"<<scurrent->stay<<endl;
			cout<<"\t\tCome From\t\t\t\t\t"<<scurrent->from<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		}
		}else{
			cout<<"Soory..!!!\nNo Record is avalible about Room"<<room<<endl;
		}
		
	}
	
	
	void UpdateRoom(string room){
		Rooms *current = new Rooms();
		Rooms *privous = new Rooms();
		current = head;
		while(current != NULL){
			
			if(current->room == room)
			 break;
			 
			 current = current->next;
		}
		if(current != NULL){
			if(current->room == room){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRoom\t\t\t\t\t\t"<<current->room<<endl;
			cout<<"\t\tGEST Name\t\t\t\t\t"<<current->gest<<endl;
			cout<<"\t\tDATE\t\t\t\t\t\t"<<current->date<<endl;
			cout<<"\t\tfAMILY Type\t\t\t\t\t"<<current->family<<endl;
			cout<<"\t\tDays Will Stay\t\t\t\t\t"<<current->stay<<endl;
			cout<<"\t\tCome From\t\t\t\t\t"<<current->from<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			string op;
			cout<<"Are you Want to update:            ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				string gest,date,family,stay,from;
				cout<<"\n\n\t\tEnter Gest Name:                       ";
				cin>>gest;
				cout<<"\n\n\t\tEnter Gest DATE:                       ";
				cin>>date;
				cout<<"\n\n\t\tEnter Gest Family:                     ";
				cin>>family;
				cout<<"\n\n\t\tEnter Gest Stay:                       ";
				cin>>stay;
				cout<<"\n\n\t\tEnter Gest From:                       ";
				cin>>from;
				current->gest = gest;
				current->date = date;
				current->family = family;
				current->stay = stay;
				current->from = from;
				cout<<"Updated Successfully"<<endl;
			}
		}
		}
		else{
			cout<<"Soory..!!!\nNo Record is avalible about Room"<<room<<endl;
		}
	}
	
	void ShowAllGest(){
		Rooms *showRoom = new Rooms;
		showRoom = head;
		while(showRoom  != NULL){
			
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRoom\t\t\t\t\t\t"<<showRoom->room<<endl;
			cout<<"\t\tGEST Name\t\t\t\t\t"<<showRoom->gest<<endl;
			cout<<"\t\tDATE\t\t\t\t\t\t"<<showRoom->date<<endl;
			cout<<"\t\tfAMILY Type\t\t\t\t\t"<<showRoom->family<<endl;
			cout<<"\t\tDays Will Stay\t\t\t\t\t"<<showRoom->stay<<endl;
			cout<<"\t\tCome From\t\t\t\t\t"<<showRoom->from<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			showRoom = showRoom->next;
		}
	}
};
