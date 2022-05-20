#include"Webpage.h"
#include<iostream>
#include<cstring>
using namespace std;


//Weeklist class
class Weeklist: public Webpage
{
	private:
		string competitorName;
		int performanceNo;
		int competitionDate;
		
	public:
		Weeklist();
		Weeklist(string pcompetitorName,int pPerformanceNo,int pcompetitionDate);
		void displayDetails();
};