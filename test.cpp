#include <iostream>
#include "personlist.h"

using namespace std;

int displayMenu (void);
void processChoice(int, PersonList&);

int main()
{
int num;

PersonList myList;


do 
{
num = displayMenu();
if (num != 3)
processChoice(num, myList);
} while (num != 3);

return 0;
}

int displayMenu(void)
{
int choice;
cout<<"\nMenu\n";
cout<<"==============================\n\n";
cout<<"1. Add student to waiting list\n";
cout<<"2. View waiting list\n";
cout<<"3. Exit program\n\n";
cout<<"Please enter choice: ";
cin>>choice;

cin.ignore();
return choice;
}

void processChoice(int choice, PersonList& p)
{

switch(choice)
{
case 1: p.addNodes();
break;
case 2: p.display();
break;
}

}

