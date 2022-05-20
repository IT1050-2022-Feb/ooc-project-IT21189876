#include"TeamsPage.h"
#include<iostream>
#include<string>

using namespace std;

//Teams page method implementation
TeamsPage::TeamsPage(){}
TeamsPage::TeamsPage(string pname){
	name = pname;
}
void TeamsPage::storePerformance()
{
	cout<<"name: " << name << endl;
};