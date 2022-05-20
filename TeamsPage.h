#include"WebPage.h"
#include<iostream>
#include<string>
using namespace std;

//Teams page class
class TeamsPage: public WebPage
{
private:
	string name;
	
public:
	TeamsPage();
	TeamsPage(string pname);
	void display();
	void storePerformance();
	
};