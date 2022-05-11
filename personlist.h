#include <string>

using namespace std;

struct PersonRec
{
	char aName[20];
	//string aName;
	int aBribe;
	PersonRec* link;
};


class PersonList
{

private:
	PersonRec *head;
	bool IsEmpty();

public:
	PersonList();
	~PersonList();
	void addNodes();
	void display();

};
