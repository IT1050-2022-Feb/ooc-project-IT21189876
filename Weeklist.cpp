#include"Weeklist.h"
#include"Competitor.h"
#include<iostream>
#include<string>

using namespace std;

Weeklist::Weeklist(){}

Weeklist::Weeklist(string pcompetitorName,int pPerformanceNo,int pcompetitionDate)
{
	competitorName = pcompetitorName;
	performanceNo = pPerformanceNo;
	competitionDate = pcompetitionDate;
}
void Weeklist::displayDetails(){
	cout<<"Competitor Name : "<<competitorName<<endl;
	cout<<"Performance No : "<<performanceNo<<endl;
	cout<<"competiton Date : "<<competitionDate<<endl;
};