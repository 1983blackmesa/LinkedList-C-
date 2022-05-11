#include <iostream>
#include <string>

using namespace std;

#include "personlist.h"

PersonList::PersonList()
{
	head = NULL;
}

PersonList::~PersonList()
{
	PersonRec *current, *temp;
	current = head;
	temp = head;
		while(current != NULL)
		{
			current = current->link;
			delete temp;
			temp = current;
		}
}


bool PersonList::IsEmpty()
{
	if(head == NULL)
		return true;
		
	else
		return false;
}


void PersonList::addNodes()
{

PersonRec *p;

//string Name;//local variable
char Name[20];
int Bribe;//local variable


cout<<"Enter the person's name: ";
cin.getline(Name, 20);
//cin>>Name; 
cout<<"Enter the person's contribution: ";
cin>>Bribe;

	
	p = new PersonRec();
	strcpy(p->aName, Name);
	//p->aName = Name;
	p->aBribe = Bribe;
	p->link = NULL;
	

		if(IsEmpty())
		{
			head = p;
		}		
	
		else
		{	
		PersonRec *current = new PersonRec;
		
		current = head;
		while(current->link != NULL)
			current = current->link;
		current->link = p;
		}

		/* THIS CODE PUTS HIGHEST BRIBE TO TOP OF THE LIST, BUT IM NOT 100% sure
		else if(p->aBribe > current->aBribe)
		{	
		//PersonRec *current = new PersonRec;
			p->link = head;
			head = p;
		}
		else
		{
		current = head;
		while(current->aBribe && current->link != NULL)
			current = current->link;
		current->link = p;
		}
		*/
}//end function



void PersonList::display()
{
  PersonRec *p;
  int i=0;
  

  //p = head;
  
  
  if(IsEmpty())
  {
  cout<<"List is Empty "<<endl;
  }
  
  for(p = head; p!=NULL; p = p->link)
  {
	  i++;
	  cout<<i<<" "<<p->aName<<" "<<"$"<<p->aBribe<<endl;
  }
  /*
  while(p != NULL)
  {
	  cout<<p->aName<<" "<<"$"<<p->aBribe<<endl;
	  p = p->link;
  }
  */
}