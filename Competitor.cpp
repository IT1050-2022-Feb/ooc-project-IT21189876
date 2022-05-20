#include"Competitor.h"
#include"Weeklist.h"
#include<iostream>
#include<string>

using namespace std;

//competitor class method implementtation
Competitor::Competitor(){}

Competitor::Competitor(string name, int page, int pdob, string civilStatus, string addres);
{
	name = pname;
	age = page;
	dob = pdob;
	civilStatus = pcivilStatus;
	address = paddress;	
}
void Competitor::readComments(){}


Competitor::~Competitor() {
cout << "Deleting Competitor " << name << endl; }